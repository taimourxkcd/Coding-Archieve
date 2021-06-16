#include <stdio.h>  //printf
#include <stdlib.h> //exit
#include <sys/types.h> //fork
#include <unistd.h> //fork and sleep
  
int main() 
{ 
    pid_t child_pid = fork(); 
  
    // Parent process 
    if (child_pid > 0) {
        printf("I completed my execution before my child, therefore i created an orphan process\n"); 
    }
    else // Child process 
        if (child_pid == 0) { 
            sleep(1); //sleep for 1 second
            printf("This printf will not be executed because i am an orphan "); 
        } 
        else{
            //error occurred
        }
  
    return 0; 
}

