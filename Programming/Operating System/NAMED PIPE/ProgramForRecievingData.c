#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<ctype.h> 

int main(){
	int res,n;
	char buffer[100],buffer2[100];
	res = open("fifo2",O_RDONLY);
	read(res,buffer,18);
	
//	printf("Reversing the data inside the reciever process having id %d...: \n",getpid());
	// Reverses the buffer
	int c = 0;
	 while (buffer[c] != '\0') {
       if (islower(buffer[c])){                                  
          buffer2[c] = toupper(buffer[c]);                          
       }else{                                                    
          buffer2[c] = tolower(buffer[c]);}
      c++;
   }
	// END Of reversing
	
	
	//send back
	printf("sending back the data to sender...\n");
	res = open("fifo2",O_WRONLY);
	write(res,buffer2,18);
}
