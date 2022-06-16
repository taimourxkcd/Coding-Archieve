#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(){

	int res;
	res = mkfifo("fifo",0777); // creates a named pipe with the name fifo1
	printf("NAMED PIPE IS CREATED \n");


}
