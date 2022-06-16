/*
STACK IMPLEMENTATION 
POP
PUSH 
TOP returns the element on the top 


*/


#if 0
#include<stdio.h>
#include<stdlib.h>


#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Error stack overflow !!!\n");
		return;
	}

	top++;
	A[top] = x;  // can be condensed as A[++top] = x;
}

void pop()
{
	if (top == -1)
	{
		printf("Error there is no element in the stack !!!");
		return;
	}
	top--;
}


int Top()
{
	return A[top];
}



void Print() 
{
		printf("STACK: ");
	for (int i = 0; i < top; i++)
		printf("%d ", A[i]);

	printf("\n");
}

int main()
{
	push(2); Print();
	push(3); Print();
	push(4); Print();
	pop();   Print();
	push(6); Print();


	return 0;
}

#endif