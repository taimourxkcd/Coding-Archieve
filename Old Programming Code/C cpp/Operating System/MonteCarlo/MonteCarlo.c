#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<math.h>
#include "MOnteCarlo.h"

int counter = 0;

#define r 1

void* GenRanAndCount(void* t){
	
	printf("MAIN THREAD IS BEING EXECUTED...\n");
	float a,b,c,x,y,d,temp1=0,temp2=0;
	srand(time(0));
	//float total* = t;
// generating random x and y coordinates between 0 and 1
	
	
	
	for(int i=0;i < (*(float*)t) ;i++){
         a =(-1) + (float) rand()/1000000000;
         b =(-1) + (float) rand()/1000000000;
         c =(-1) + (float) rand()/1000000000;
         d =(-1) + (float) rand()/1000000000;
	temp1 = a+b;
	temp2 = c+d;
	if(temp1>=-1 && temp1<=1){
		x=temp1;
	}else if(temp2>=-1 && temp2<=1){
		y=temp2;
	}        
	
	

	// check if if is inside the circle
	if( pow(x,2) + pow(y,2) <= (r*r) ){
	counter++ ;}

   }
	//printf("DEBIGGING in func %f \n",(*(float*)t));
   printf("total points that lie inside the circle are %d\n",counter);
	
}

void* Verify(void* t){
	sleep(5);
	printf("CHILD THREAD IS BEING EXECUTED...\n");
	float ans = 4 * ( (counter) / *((float*)t) );
	printf("the answer of the monte carlo after verification is %f\n",ans);
}
