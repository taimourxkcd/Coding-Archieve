#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
int main(){

	int n,f,f1;
	char buff[10];
	f = open("seek.txt",O_RDWR); // IHL12345678HKJDHK
	f1 = lseek(f,-20,SEEK_SET);
	std::cout<<"the pointer is at the position : "<<f1<<std::endl;
	read(f,buff,10);
	write(1,buff,10);





}
