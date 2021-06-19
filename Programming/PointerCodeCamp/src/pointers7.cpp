#include<stdio.h>
#include<stdlib.h>

int main() {

	int n;
	printf("please enter a number ");
	scanf("%d", &n);
	int* A = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		A[i] = i + 1;
	}
	int* B = (int*)realloc(A, (n/2) * sizeof(int));
	int* B = (int*)realloc(NULL, n * sizeof(int)); // this is same as the malloc 
	printf("the address of the previous memory block is %d the address of the previous memory block is %d\n ", A,B);
	for (int j = 0; j < n; j++) {
		printf("%d ", B[j]);
	}
}