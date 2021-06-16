#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main(){

	pid_t p;
	p=fork();
	
	if( p==0 ){
		
		printf("I am the child  having the id %d \n",getpid());
		printf("1 My parent PID is %d \n",getppid());
	}else{
		wait(NULL);
		sleep(3);
		printf("I am parent having the id %d \n",p);
		printf("2 MY child PID  having the id %d \n",getpid());
	
	}



}
