#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(){

	int res,n;
	char buffer[100];
	res = open("fifo",O_RDONLY);
	n=read(res,buffer,100);
	printf("Toral bytes read %d \n",n);
	printf("%s was passed to me\n",buffer);
	printf("process %d is finished \n",getpid());

}
