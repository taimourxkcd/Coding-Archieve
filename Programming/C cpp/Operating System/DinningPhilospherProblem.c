#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#include<wait.h>


sem_t room;
sem_t chopstick[5];
pthread_mutex_t lock;
int count=0;



void think(int temp){
	printf("philospher %d is THINKING\n",temp+1);
	sleep(1);
}

void eat(int temp){
	printf("philospher %d is EATING\n",temp+1);
	sleep(1);

}

void* run(void* parameter){
	int* phil = (int*)parameter;

	    sem_wait(&room);
	    printf("PHilospher %d has entered the room \n",*phil+1);

	    sem_wait(&chopstick[(*phil)]);
	    sem_wait(&chopstick[(*phil+1) % 4 ]);
	    eat(*phil);
	    printf("PHilospher %d has finished eating his food \n",*phil+1);
	    sem_post(&chopstick[(*phil+1) % 4 ]);
	    sem_post(&chopstick[(*phil)]);
	    sem_post(&room);
	    think(*phil);
	    count++;

	

}


int main(){

	int a[5];
	pthread_t thread[5];
	
	sem_init(&room,0,5);

	
	// INITIAZLIZE THE SEMAPHORE
	for(int i=0;i<5;i++){
		sem_init(&chopstick[i],0,1);
	}
	
	for(int i=0;i<5;i++){
		a[i]=i;
		pthread_create(&thread[i],NULL,&run,(void*)&a[i]);

	}
	
	for(int i=0;i<5;i++){
		pthread_join(thread[i],NULL);
	}
	
	// DESTROY THE SEMAPHORE
	for(int i=0;i<5;i++){
	sem_destroy(&chopstick[i]);}
	
	printf("The total number of philosphers did eating and thinking successfully are %d\n",count); 	
	
	
	return 0;
}
