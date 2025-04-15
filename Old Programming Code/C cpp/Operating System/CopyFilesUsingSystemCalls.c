#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

// HOW TO RUN
// BEFORE COMPILATION
// cat source2.txt
//my name is taimour
// AFTER COMPILATION
//sudo g++ CopyUsin...cpp
//./a.out CopyUsin....cpp
// see , Text from the src.txt is copied into the target.txt



int main(){
	
	int n,fd,fd1;	
	char buf[50];
	fd = open("source2.txt",O_RDONLY);                      
	n = read(fd,buf,100);
	write(1,buf, 20);
	fd1 = open("target2.txt", O_CREAT | O_WRONLY ,0642);    
	write(fd1,buf,n);					   
	

}
