#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){

	pid_t p;
	p = fork();
	
	if(p==0){//child
	//collatz conjecture START
	int n;
	printf("please enter a number \n");
	scanf("%d",&n);
	if(n>0){
	while(n!=1){
		if(n%2 == 0){//do something
			n=n/2;
		}else{
		n=3*n+1;
		}
		printf("%d ",n);	
          }	
	}else{
	printf("please enter a number that is greater then 1\n");
	}
	printf("\n");
	// collatz conjecture END	
	
	
	}else{//parent
	wait(NULL);
	
	}

}
