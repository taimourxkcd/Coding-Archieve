#include <pthread.h>
#include <unistd.h>
#include <stdio.h>


void *runner (void *param); /* the thread */

int main (int argc, int argv[])
{
	pthread_t tid; /* the thread identifier */
	pthread_attr_t attr; /* set of thread attributes */
	
	/* get the default attributes */
	pthread_attr_init (&attr);
	
	/*create the thread */
	int v=5;
	pthread_create(&tid, &attr, runner, &v);
	
	/* wait for the thread to exit */
	pthread_join (tid, NULL);
	printf ("I am a process and my process id is %d\n", getpid());
	printf ("I am a process and the thread with id %ld that I createdhas terminated\n", tid);
}
/* The thread will begin control in this function */
/* This function calculates the sum = 1+...+atoi(param) */
void *runner (void *param)
	{
	int i;
	int *upper = (int*)param; 

	int sum = 0;
	for (i=1; i<=8; i++)
	sum += i;
	/* The function pthread_self() returns the ID of this thread */
	printf ("I am a thread with id %ld with parameter %d and I have calculated the sum =%d \n. ", pthread_self(),*upper ,sum);
	pthread_exit(0);
}

