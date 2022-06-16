#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


int main(){
	int fd[2],n;       // pipe has 2 ends || 0 for reading || 1 for wirting 
	char buffer[100];
	
	pid_t p;
	pipe(fd);
	p=fork();
	
	if( p>0 ){ // parent 
	
	// if parent is not going to read then we have to close it 
	// if child cannot write then we have to close the writing end of the child
	close(fd[1]);
	n = read(fd[0], buffer, 100);
	write(1,buffer,n); 
	
	}else{ // child
	close(fd[0]);
	
	// generating the pin number 
	int secret;
	srand(time(0));
	secret  =1000 + rand() % 9000;
	
	// converting int into the string 
	char str[20];
	sprintf(str, "%d", secret);
	
	printf("passing pin code to the parent \n");
	write(fd[1], str, 15);
	wait(NULL); // because we have to wait for the child to do the reading part
	

	}
	
	

}
