/*
ROBUST
REVERSES THE LINKED LIST
PRINTS THEM ONTO THE SCREEN
*/
#if 0

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data; 
	struct Node* next;
};


struct Node* head; // gobal function 

Node* Reverse(struct Node* head)
{
	struct Node* next, *prev, *current;
	current = head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;

}


void Insert(int data)// INSERTS THE DATA AT THE END OF THE LIST 
{
	struct Node* temp = new Node();
	struct Node* temp2 = new Node();
	temp2 = head;
	temp->data = data;
	temp->next = NULL;



	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}


void Print()
{
	struct Node* temp = new Node();
	temp = head;
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");

}

int main()
{

	head = NULL;

	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);   // 2 4 6 5
	Print();

	head = Reverse(head);
	Print();

	return 0;
}





#endif