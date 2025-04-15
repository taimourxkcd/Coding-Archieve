#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>

int main(){
	
	int res;
	res = mkfifo("fifo2",0777);
	printf("Named pipe is being created \n");



}
