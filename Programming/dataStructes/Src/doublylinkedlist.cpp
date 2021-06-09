/*
ROBUST
Doubly Linked List Insert at the head 
Doubly Linked List Insert at the tail
Doubly linked list print the list in reverse order 
Doubly linked list print the list in forward order 
PRINTS THEM ONTO THE SCREEN
*/

#if 0
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // global value - pointer to the head node 

struct Node* GetNewNode(int x)
{
	struct Node* newNode =
		(struct Node*)malloc(sizeof(struct Node));
	(*newNode).data = x; // newNode->data = x; 
	(*newNode).next = NULL;
	(*newNode).prev = NULL;
	return newNode;
}

void InsertAtHead(int x)
{
	struct Node* newNode = GetNewNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	head->prev = newNode;
	newNode->next = head;
	head = newNode;


}
void Print()
{
	struct Node* temp = head;
	printf("Forward: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void ReversePrint()
{
	struct Node* temp = head;
	if (temp == NULL) return;

	// Going to the last node 
	while(temp->next != NULL)
		temp = temp->next;
	

	// Traversing backwared using the prev pointer 
	printf("Reverse: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

void InsertAtTail(int x)
{
	struct Node* temp = GetNewNode(x);
	struct Node* current = head;
	if (head == NULL)
		head = temp;

	while (current->next != NULL)
		current = current->next;

	current->next = temp;
	temp->prev = current;

}


int main()
{
	head = NULL;
	InsertAtHead(2); Print(); ReversePrint();
	InsertAtHead(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(1); Print(); ReversePrint();
	InsertAtTail(9); Print(); ReversePrint();
	InsertAtTail(3); Print(); ReversePrint();
	
	return 0;
}





#endif
