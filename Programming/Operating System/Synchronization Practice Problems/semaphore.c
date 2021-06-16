#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>

void *fun1();
void *fun2();
int shared=1;
sem_t s;


int main(){

	sem_init(&s,0,1);
	
	pthread_t thread1,thread2;
	
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	printf("THe final value of the shared variable is %d\n",shared);
	
	
	pthread_t a_thread;
	
}

void *fun1(){
	int x;
	sem_wait(&s);
	x=shared;
	printf("THread reads the value of the shared variable %d \n",x);
	x++;
	printf("LOcal updation by the thread1 %d \n",x);
	sleep(1);
	shared=x;
	printf("value of the shared varibale updated by the thread1 is %d\n",shared);
	sem_post(&s);
} 

void *fun2(){
	int y;
	sem_wait(&s); // executes wait operation on s
	y=shared;
	printf("THread reads the value of the shared variable %d \n",y);
	y--;
	printf("LOcal updation by the thread2 %d \n",y);
	sleep(1);
	shared=y;
	printf("value of the shared varibale updated by the thread2 is %d\n",shared);
	sem_post(&s);  //
} 


















