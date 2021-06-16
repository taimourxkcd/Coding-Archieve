#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

	pid_t q,p;
	
	q=fork();
	
	if(q<0){
	printf("error creating the process");
	}else if(q==0){ //CHILD PROCESS
		printf("CHILD PROCESS A: child 1A process id is %d \n",getpid());
		printf("CHILD PROCESS A: child 1A parent id is %d \n",getppid());
		
		
		{
		p=fork();
		if(p<0){
	printf("INSIDE CHILD 1: error creating the process");
	}else if(p==0){ //CHILD PROCESS
		printf("INSIDE CHILD A: CHILD PROCESS: child 1 process id is %d \n",getpid());
		printf("INSIDE CHILD A: CHILD PROCESS: child 1 parent id is %d \n",getppid());
	}else{		//PARENT PROCESS
		printf("INSIDE CHILD A: PARENT PROCESS: parent 1 process id is %d \n",getpid());
		printf("INSIDE CHILD A: PARENT PROCESS: child 1 parent id is %d \n",p);
	}
		
		
	printf("COMMON COMMAD INSIDE THE CHILD 1 PROCESS \n");	
		
		
		
		}
		
		
		
		
	}else{		//PARENT PROCESS
		printf("PARENT PROCESS A: parent 1A process id is %d \n",getpid());
		printf("PARENT PROCESS A: child 1A parent id is %d \n",q);
	}
	
	printf("COMMON COMMAD \n");
	
	return 0;
}

