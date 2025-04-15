//written by colleague
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int *arr;
void *runner(void *param);

int main(int argc, char *argv[])
{

	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);

	if(argc!=2)
	{
		fprintf(stderr,"ERROR:You have to pass a value in terminal\n");
		return -1;
	}

	int size=atoi(argv[1]);
	arr = (int*) malloc(size * sizeof(int));
	arr[0]=0;
        arr[1]=1;

	printf("the Prime till %d is :\n\t\t",size);
	if(size<2)
	{
		printf("\nNo prime no is avaible less or equal to than %d",size);
		return 0;
	}
	pthread_create(&tid,&attr,runner,&size);
	pthread_join(tid,NULL);


	for(int i=0;arr[i]!=0;i++)
	{
	printf("%d  ",arr[i]);
	}
	printf("\n\n");
	return 0;
}

void *runner(void *param)
{
	int size=*((int*)param);
	int i, j, flag;
	for(int i=0;i<=size;i++)
		arr[i]=0;
	
	int count=0;
	for (i = 2; i <= size; i++) {

        // if i is prime or not
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            arr[count++]=i;
    }
}
