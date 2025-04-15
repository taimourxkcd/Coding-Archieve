#include<stdio.h>


void sumOfElements(int* A, int size) { // int* A or int A[] ..... its the same

	int sum=0;

	for (int i = 0; i < size; i++) {
		sum += A[i];   // sum += *(A + i); this is also true 
	}
	printf("%d",sum);
}


void Double(int* A, int size) {

	for (int i = 0; i < size; i++) {
		A[i] = 2 * A[i];
	}
}

int main() {
	int A[] = { 1,2,3,4,5 };
	int size;
	size = sizeof(A) / sizeof(A[0]);

	sumOfElements(A, size);
	Double(A,size);
	for (int i = 0; i < size; i++) {
		printf("%d, ",A[i] );
	}

	return 0;
}