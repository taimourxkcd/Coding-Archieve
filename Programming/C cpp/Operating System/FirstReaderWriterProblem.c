#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<omp.h>
#include<pthread.h>


omp_lock_t lock;

void* readerFunc(void* arg){
	#pragma omp parallel
	{
	printf("READER Thread %d is entering and reading ...\n",omp_get_thread_num());
	sleep(1);
	}
	

}

void* writerFunc(void* arg){
	#pragma omp parallel
	{
	omp_set_lock(&lock);
	printf("WRITER Thread %d is entering and writing .... \n",omp_get_thread_num());
	sleep(1);
	omp_unset_lock(&lock);
	}

}

int main(){
	
 	int reader,writer;
	pthread_t tid1[10],tid2[10];
	omp_init_lock(&lock);
	
	printf("ENter the number of readers ");
	scanf("%d",&reader);
	printf("ENter the number of writers ");
	scanf("%d",&writer);
	
	omp_set_num_threads(reader); // sets reader number of threads 
	omp_set_num_threads(writer);

	
	for(int i =0; i<3; i++){
		pthread_create(&tid1[i],NULL,&readerFunc,NULL);
		pthread_create(&tid2[i],NULL,&writerFunc,NULL);
	}
	
	for(int i =0; i<3; i++){
		pthread_join(tid1[i],NULL);
		pthread_join(tid2[i],NULL);

	}
	
	omp_destroy_lock(&lock);


	return 0;
}
