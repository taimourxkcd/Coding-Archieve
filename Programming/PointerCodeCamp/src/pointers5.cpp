//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a = 5;
//	int* p;
//	p = (int*)malloc(sizeof(int));  // we have type casted int because malloc returns the void pointer 
//	*p = 10;						// 10 is stored in the heap
//	free(p);
//	p = (int*)malloc(20*sizeof(int)); // array is stored in heap, returns a pointer to the base of the block of memory that has been allocated 
//	free(p);
//	// same piece of code in c++
//	int a = 5;
//	int* p;
//	p = new int;
//	delete p;
//	*p = 10;						// 10 is stored in the heap
//	p = new int[20];
//	free(p);
//
//	
//	return 0;
//}