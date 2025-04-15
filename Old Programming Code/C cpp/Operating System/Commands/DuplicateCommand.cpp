#include<unistd.h>
#include<iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main(){
	
	int fd,fd1;
	fd = open("dup.txt", O_RDONLY);
	std::cout<<"OLd file descriptor is "<<fd<<std::endl;
	fd1 = dup(fd);
	//fd1 = dup2(fd , 7);
	std::cout<<"new file descriptor is "<<fd1<<std::endl;
	
	return 0;


}

