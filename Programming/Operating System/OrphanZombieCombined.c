#include <stdio.h>  
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
int main() 
{ 
    pid_t child_pid = fork(); 

    // Parent process 
    if (child_pid > 0) {
        printf("I finished my execution before my child therefore i created an orphan\n"); 
    }
    else // Child process 
        if (child_pid == 0) { 
            sleep(1); //sleep for 1 second
            printf("This printf will not be executed as i am an orphan \n"); 
        
        
        
        //start of creation of a zombie process inside an orphan child 
        {
      


    pid_t child_pid2 = fork(); 
 
    
    // Parent process 
    if (child_pid2 > 0){ 
        sleep(1); //sleep for 1 second
        printf("\nI don't wait for my child therefore i created a zombie process inside an already orphan process\n");
    }
    else // Child process 
        if(child_pid2 == 0){ 
            printf("My parent doesn't wait me\n");
            exit(0);
        }
        else{
            //error occurred
        }
    
        
        }
        //end of zombie inside an orphan child function
        
        
        } 
        else{
            //error occurred
        }
  
    return 0; 
}
