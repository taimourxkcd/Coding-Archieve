#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void *myfunc1(void *ptr);
void *myfunc2(void *ptr);

pthread_mutex_t lock;
int a[1000];

int main(){
	
	pthread_t thread1,thread2;
	int thret1,thret2;

	char* msg1 = "thread1";
	char* msg2 = "thread2";
	
	memset(a,0,sizeof(a));
	
	thret1 = pthread_create(&thread1,NULL,&myfunc1,(void*)msg1);	
	thret2 = pthread_create(&thread2,NULL,&myfunc2,(void*)msg2);
	
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	
	printf("%d \n",thret1);
	printf("%d \n",thret2);	
	
		
	return 0;
}


void* myfunc1(void *ptr){

	char* msg = (void*)ptr;

	pthread_mutex_lock(&lock);
	for(int i=0;i<1000;i++){
		printf("X");
		a[i]=i;
	}
	pthread_mutex_unlock(&lock);
}

void* myfunc2(void *ptr){

	char* msg = (void*)ptr;

	pthread_mutex_lock(&lock);
	for(int i=0;i<1000;i++){
		printf("%d ",a[i]);
	}
	pthread_mutex_unlock(&lock);
	


}






