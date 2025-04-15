#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <ctype.h> 

int main(){
	
	int res;
	char buffer2[18];
	res = open("fifo2",O_WRONLY);
	write(res,"My Name Is Taimour",18);
	printf("Sender process having the id %d send the data \n",getpid());
	
	//print back the data 
	res = open("fifo2",O_RDONLY);
	read(res,buffer2,18);
	
	write(res,buffer2,18);
	printf("the data recieved back is: %s \n",buffer2);
	
}
