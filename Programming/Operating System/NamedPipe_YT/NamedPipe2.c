#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){

	int res,n;
	res = open("fifo",O_WRONLY);
	write(res,"LANA DEL RAY ",15);
	printf("process %d is finished \n",getpid());


}
