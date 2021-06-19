#include<stdio.h>
#include<stdlib.h>

int main(){

	int n;
	printf("please enter a number ");
	scanf("%d",&n);
	 
	int A[n];// ERROR SO WE HAVE TO USE DYNAMIC MEMORY ALLOCATION
	int* A = (int*)malloc(n * sizeof(int));
	int* A = (int*)calloc(n , sizeof(int));
	for (int i = 0; i < n; i++) {
		A[i] = i + 1;
	}
	int* B = (int*)realloc(A, 2 * n * sizeof(int));
	*(A+2) = 9;
	printf("the address of the previous memory block is %d \n the address of the previous memory block is %d",A,B);

	for (int j = 0; j < n; j++) {
		printf("%d ",A[j]);
	}


	return 0;
}