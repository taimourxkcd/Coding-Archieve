#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<math.h>
#include "MOnteCarlo.h"
#include "MOnteCarlo.c"
#include<pthread.h>

// HOW TO RUN
//sudo gcc -lpthread -o MainMoteCarlo MainMoteCarlo.c -lm

void* GenRanAndCount(void* t);
void* Verify(void* t);

int main(void){
	//MONTA CARLO NUMBER GENERATION, COUNTING AND VERIFYING THE ANSWER
	float total = 15000000;
	
	// CREATING THE THREAD
	pthread_t th1;
	pthread_t th2;
	pthread_create(&th1,NULL,GenRanAndCount,&total);
	pthread_create(&th2,NULL,Verify,&total);
	

	//join thread
	pthread_join(th1,NULL);
	pthread_join(th2,NULL); 


	
		
	
  	 
   
   

}
