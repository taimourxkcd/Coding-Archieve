#include<stdlib.h>
#include<stdio.h>
#include<wait.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
#include<sys/types.h>


int main(){
		
	pid_t p;
	p = fork();
	
	void *shared_memory;
	char buff[100];
	int shmid;
	
	int a[100];
	int i=0;
	
	
	
	if(p==0){//child
	//collatz conjecture START
	int n;
	printf("please enter a number \n");
	scanf("%d",&n);
	if(n>0){
	while(n!=1){
		if(n%2 == 0){//do something
			n=n/2;
			a[i]=n;
		}else{
		n=3*n+1;
		a[i]=n;
		}
		i++;
          }	
	}else{
	printf("please enter a number that is greater then 1\n");
	}
	
	printf("The correct sequence of collatz conjecture generated in the child is as follows: \n");
	for(int j=0;j<i;j++){
	printf("%d  ",a[j]);
	}
	printf("\n\n\n");
	
	// convert int array into the string 
     char string[255] = {0};
    /*do something*/
    strcpy( string, "[" );
    for( size_t m = 0; m < (i*4/sizeof(int)) -1; m++ ){
        sprintf( &string[ strlen(string) ],  "%d, ", a[m] );
    }
    sprintf( &string[ strlen(string) ],  "%d", a[4] );
    strcat( string, "]" );
	// end of conversion 	
	printf("\n");	
	// collatz conjecture END
	
	// sending data to the parent using the shared memory
	shmid=shmget((key_t)1122, 1024,0666|IPC_CREAT); // create the shared memory segment with the key whatever (any number)
	printf("key of the shared memory is %d\n",shmid);
	shared_memory=shmat(shmid,NULL,0);
	printf("process attached at %p\n",shared_memory);

	printf("sending the collatz conjecture to shared memory is as follows:... \n");
	strcpy(shared_memory,string);
	printf("You wrote %s\n",(char *)shared_memory);	
	printf("\n\n\n");
	
	}else{//parent
	wait(NULL);
	
	shmid=shmget((key_t)1122,1024,0666);
	printf("key of the shared memory is %d \n",shmid);
	shared_memory=shmat(shmid,NULL,0);
	printf("process attached at %p\n",shared_memory);
	printf("Data recieved from the shared memory in the parent process is as follows:\n %s\n",(char *)shared_memory);	
			
	
		
	}










}
