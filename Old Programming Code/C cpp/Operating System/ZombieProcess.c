

#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	
	pid_t p;
	p = fork();
	
	if(p==0){
	printf("i am child having id :  %d\n",getppid());
	printf("my parent id is %d\n",getpid());
	
	
	}else{//parent
	sleep(30);
	printf("i am parent haivng the PID : %d\n",getppid());
	printf("my child is having id %d\n",getpid());
	
	
	
	
	
	
	}






}
