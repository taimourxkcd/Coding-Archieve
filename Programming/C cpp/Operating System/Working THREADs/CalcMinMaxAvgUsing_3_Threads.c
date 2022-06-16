#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include"threadHelp.h"



int print(int *a, int* size){
	printf("THe orignal list of numbers given by the user are ");
	for(int i=0; i < *size; i++){
	printf("%d ",a[i]);
	}
	printf("\n");
}

int* getData(int *a, int *size){
	
	printf("PLease enter %d numbers of your choice\n",*size);
	for(int i=0; i < *size; i++){
	scanf("%d",&a[i]);
	}
	return a;
}

void* avg(void *a){
	
	struct data* avg = a;	
	int sum=0;
	float average;
	
	for(int i = 0; (i < (avg->size)) ; i++){
		sum += (*((int*)avg->t_ptr)+i) ;
	}
	average = sum/(avg->size);
printf("average of the numbers provided by the user is  %f \n", average);	
}

void* min(void *a){
	
	struct data* min = a;	
	int minimum=(*((int*)min->t_ptr+0));
	

	
	for(int i = 0; (i < (min->size)) ; i++){
		if( (*(int*)min->t_ptr+i) < minimum ){
			minimum=(*((int*)min->t_ptr+i));
		}
	}
printf("minimum of the numbers provided by the user is  %d \n", minimum);

}

void* max(void *a){
	
	struct data* max = a;	
	int maximum=(*((int*)max->t_ptr+0));
	

	
	for(int i = 0; (i < (max->size)) ; i++){
		if( (*(int*)max->t_ptr+i) > maximum ){
			maximum=(*((int*)max->t_ptr+i));
		}
	}
	printf("maximum of the numbers provided by the user is  %d \n", maximum);
}





int main(){
	
	struct data d;
	
	
	//CREATING AN ARRAY, TAKING DATA , PRINTING DATA
	int n,size;
	printf("PLease enter the size of your arrya\n");
	scanf("%d",&n);
	int* a = (int*)malloc(sizeof(n));
	d.size = n*sizeof(*(a))/sizeof(int);
	int *ptr = getData( a, &(d.size) );
	print(ptr,&d.size);
	
	// pointer inside struct now points to the pointer that points to the array	
	d.t_ptr = ptr;
	
		
	//CREATING THREE THREADS
	pthread_t th_id1;
	pthread_t th_id2;
	pthread_t th_id3;
	
	pthread_create(&th_id1,NULL,avg,&d);
	pthread_create(&th_id2,NULL,min,&d);
	pthread_create(&th_id3,NULL,max,&d);
	
	
	
	pthread_join(th_id1,NULL);
	pthread_join(th_id2,NULL);
	pthread_join(th_id3,NULL);
	
	pthread_exit(NULL);
	
	return 0;

}
