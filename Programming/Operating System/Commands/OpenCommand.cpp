#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){
	
	int n,fd,fd1;	
	char buf[50];
	//fd = open("test.txt",O_RDONLY);
	n = read(0,buf,50);
	write(1,buf, 10);
	fd1 = open("target",O_WRONLY | O_APPEND,0642);
	write(fd1,buf,10);
	

}
