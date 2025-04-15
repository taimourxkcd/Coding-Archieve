#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<omp.h>
#include<pthread.h>


omp_lock_t lock;

int people_done_taking_ticket = 0;
int people_cencel_ticket = 0;
int ticket_number = 1000;
int berth_number = 1000;

void* ticket_buy(void* arg) {
#pragma omp parallel
	{
		printf("people %d is buying the ticket No %d ...\n", people_done_taking_ticket, ticket_number);
		ticket_number++;
		people_done_taking_ticket++;
		sleep(1);
	}


}

void* ticket_cencel(void* arg) {
#pragma omp parallel
	{

		omp_set_lock(&lock);


		printf("Person %d is cenceling the ticket and berth number %d is free to use.... \n", people_cencel_ticket, berth_number);
		berth_number++;
		people_cencel_ticket++;
		sleep(1);
		omp_unset_lock(&lock);
		
	}

}

int main() {

	int berth, people;
	pthread_t tid1[10], tid2[10];
	omp_init_lock(&lock);

	printf("ENter the number of berths ");
	scanf("%d", &berth);
	printf("ENter the number of people ");
	scanf("%d", &people);

	omp_set_num_threads(berth); // sets berth number of threads 
	omp_set_num_threads(people);


	for (int i = 0; i < 3; i++) {
	
		pthread_create(&tid1[i], NULL, &ticket_cencel, NULL);
		pthread_create(&tid2[i], NULL, &ticket_buy, NULL);
		
	}

	for (int i = 0; i < 3; i++) {
		pthread_join(tid1[i], NULL);
		pthread_join(tid2[i], NULL);

	}

	omp_destroy_lock(&lock);


	return 0;
}
