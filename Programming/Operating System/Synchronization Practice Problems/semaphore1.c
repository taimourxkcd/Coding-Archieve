#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

sem_t mutex;

void* function1(void* ptr);
void* function2(void* ptr);

char buf[24];


int main(){

	pthread_t thread1;
	pthread_t thread2;
	
	sem_init(&mutex,0,1);
	
	char *msg1 = "thread1";
	char *msg2 = "thread2";
	
	pthread_create(&thread1,NULL,&function1,(void*)msg1);
	pthread_create(&thread2,NULL,&function2,(void*)msg2);
	
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	sem_destroy(&mutex);
	
	return 0;
}

void* function1(void* ptr ){
	char* msg = (char*) ptr;
	
	printf("%s \n",msg);

	sem_wait(&mutex);
	sprintf( buf,"%s","Hello there!");
	sem_post(&mutex);
	
	pthread_exit(0);

}

void* function2(void* ptr ){
	char* msg = (char*) ptr;
	printf("%s \n",msg);
	
	sem_wait(&mutex);
	printf("%s\n",buf);
	sem_post(&mutex);
	
	pthread_exit(0);
	
	

}



















