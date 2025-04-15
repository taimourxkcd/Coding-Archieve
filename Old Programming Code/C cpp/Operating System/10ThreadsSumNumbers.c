#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<omp.h>
#include<pthread.h>


omp_lock_t lock;

int sum = 0;
int num  = 10;



void* Calc_sum(void* arg) {
#pragma omp parallel
	{

 	
 	    omp_set_lock(&lock);
            sum = sum + num;
            num++;
            //printf("the sum of the numbers from 10 t0 100 is %d\n",sum);
	    sleep(1);
	    omp_unset_lock(&lock);
		
	}

}

int main() {

	pthread_t tid1[10];
	omp_init_lock(&lock);
	

	for (int i = 0; i < 10; i++) {
	
		pthread_create(&tid1[i], NULL, &Calc_sum, NULL);
		
	}

	for (int i = 0; i < 10; i++) {
		pthread_join(tid1[i], NULL);
	}

        printf("the sum of the numbers from 10 t0 100 is %d\n",sum);
	omp_destroy_lock(&lock);


	return 0;
}
