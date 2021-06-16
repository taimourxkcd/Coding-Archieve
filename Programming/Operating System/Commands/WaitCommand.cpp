#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
 
int main(){

	int w1,wstatus;
	pid_t  q,p;
	q = fork();
	std::cout<<q<<"\n";	
	
	if(q<0){
		std::cout<<"Error\n";
	
		// CHILD PROCESS
	}else if(q==0){  
		//sleep(3);
		std::cout<<"CHild id is : "<<getpid()<<std::endl;
		std::cout<<"my Parent id is : "<<getppid()<<std::endl;
		
		// PARENT PROCESS	
	}else  {
	p = fork();
		if(q==0)
		{
		
		waitpid(p,NULL,0 );
		//w1 = wait(&wstatus);
		//wait(NULL);
		//std::cout<<"status is : "<<WIFEXITED(wstatus)<<std::endl;
		//std::cout<<"PID Of the is : "<<w1<<std::endl;
		std::cout<<"I am parent having id : "<<getpid()<<std::endl;
		std::cout<<"My 1st child id is : "<<p<<std::endl;
		std::cout<<"My 2nd child id is : "<<q<<std::endl;
		}
	}
	
	std::cout<<"DOing common task"<<std::endl;
	



}

