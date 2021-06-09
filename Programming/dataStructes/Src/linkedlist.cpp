/*
ROBUST
WORKS 
IINSERT ELEEMNT 
PRINT ELEMENTS 
*/

#if 0


#include<stdio.h>
#include<stdlib.h>

#define scanf scanf_s 

struct Node {
	int data;
	struct Node* next; // Node* next IN THE CASE OF C++
};

// NOTE(taimour): This code is when you declare head as the global variable
#if 0
struct Node* head; // global varible 

void Insert(int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;   // in  C (*temp).data = x;
	temp->next = head;
	head = temp;
}

void Print()
{

	struct Node* temp = head;
	printf("List is ");
	while (temp != NULL)
	{
		printf(" %d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

#endif


#if 0
// NOTE(taimour): This code is when you declare head as the local variable in the main function 

Node* Insert(Node* head, int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;   // in  C (*temp).data = x;
	temp->next = head;

	if (head != NULL) temp->next = head;
	 head = temp;
	 return head;
}

void Print(Node* head)
{

	printf("List is ");
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
#endif

#if 1
// NOTE(taimour): This code is when you pass the head as the reference in the insert function

void Insert(Node** PointerToHead, int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;   // in  C (*temp).data = x;
	temp->next = NULL;

	if (*PointerToHead != NULL) temp->next = *PointerToHead;
	*PointerToHead = temp;
}

void Print(Node* head)
{

	printf("List is ");
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
#endif


int main() {

	struct Node* head;
	head = NULL;
	int n, i, x;

	printf("How many numbers you want to enter \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter the number \n");
		scanf("%d",&x);
 // Note(taimour): THIS CODE IS WHEN THE HEAD IS PASSED AS A POINTER VARIABLE 
#if 0 
		head = Insert(head, x);
#endif

// Note(taimour): THIS CODE IS WHEN THE HEAD IS PASSED AS THE REFERENCE 
#if 1 
		Insert(&head, x);
#endif
		Print(head);
	}

	return 0;
}

#endif

