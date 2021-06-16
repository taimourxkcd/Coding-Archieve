#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#include<wait.h>

#define BUFFERSIZE 10
sem_t full,empty;
pthread_mutex_t mutex;
int buffer[BUFFERSIZE];
int counter = 0, produceCount=0, consumerCount=0;


int produce(){
	
	int item,waittime;
	sleep(1);
	item=rand()%10;	
	return item;

}

void append(int item){
	buffer[counter] = item;
	counter++;

}

int take(){

        int size = sizeof(buffer);
        for(int i=10; i>0; i--)
        {
        	
            if(buffer[i] > 0){
            	printf("the element %d is consumed \n",buffer[i]);
	            buffer[i] = 0;
	            }
            }
	counter++;
        }


void* producer(void* argc){

	int item;  
        item = produce();
        sem_wait(&empty);
	pthread_mutex_lock(&mutex);
       printf("the item that is prouduced is %d \n",item);
        append(item);
	produceCount++;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
}

void* consumer(void* arg){

        sem_wait(&full);
  	pthread_mutex_lock(&mutex);
        take();
	consumerCount++;
	pthread_mutex_unlock(&mutex);
        sem_post(&empty);
}

void print_info(){
for(int i=0;i<10;i++){
	printf(" %d ",buffer[i]);
	}
	printf("\n");
}



int main(){
	
	int j;
	pthread_t tid1[10],tid2[10];

	//initiazlize the semaphore
	sem_init(&full,0,1);		// initiazlized to 0
	sem_init(&empty,0,BUFFERSIZE); // initiazlized to 10
	
	// creating the thread
	for(int i=0;i<10;i++){
	pthread_create(&tid1[i],NULL,&producer,NULL);
	j=i;
	pthread_create(&tid2[i],NULL,&consumer,NULL);
	}	
	
	
	for(int i=0;i<10;i++){
	pthread_join(tid1[i],NULL);
	pthread_join(tid2[i],NULL);
	}
	
	
	
	printf("THE FINAL BUFFER LEFT IS: ");	
	for(int i=0;i<10;i++){
	printf(" %d ",buffer[i]);
	}
	
	printf("\n");
	printf("TOTAL NUMBER OF ITEMS THAT ARE PRODUCED: %d\n",produceCount);
	printf("TOTAL NUMBER OF ITEMS THAT ARE CONSUMED: %d\n",consumerCount);





	return 0;
}
