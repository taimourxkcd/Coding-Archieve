#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){

	pid_t  q;
	q = fork();
	std::cout<<q<<"\n";	
	
	if(q<0){
		std::cout<<"Error\n";
	
		// CHILD PROCESS
	}else if(q==0){  
		std::cout<<"CHild id is : "<<getpid()<<std::endl;
		std::cout<<"my Parent id is : "<<getppid()<<std::endl;
		
		// PARENT PROCESS	
	}else  {
		std::cout<<"My child id is : "<<q<<std::endl;
		std::cout<<"Parent id is : "<<getpid()<<std::endl;
		
	}
	
	std::cout<<"DOing common task"<<std::endl;
	



}

