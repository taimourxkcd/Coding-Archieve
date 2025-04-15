#include<stdio.h>

void hello(char* name) {
	printf("hello %s",name);
}

int Add(int a, int b) {
	return a + b;
}

int main() {

	int c;
	int (*p)(int, int);   // this is declaring a function pointer KEEP IN MIND HOW PARAENTHESIS ARE USED HERE 
						  // int* Func(a,b) this is declaring the function that would return *int 
	p = &Add;             // p = Add will also mean the same thing 
	c = (*p)(2, 3);		  // c = p(3,3) this is also the same thing 
	printf("%d\n",c);

	void (*ptr)(char*);
	ptr = hello;
	char name[] = "taimour";
	ptr(name);



	return 0;
}