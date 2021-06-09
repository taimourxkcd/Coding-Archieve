/*
ROBUST
REVERSES THE LIST IN USING THE RECURSION 
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
	
struct Node* head = NULL; // global value 

struct Node* Insert(struct Node* head, int data)// INSERTS THE DATA AT THE END OF THE LIST 
{
	struct Node* temp = new Node();
	Node* current = NULL;
	Node* prev = NULL;


	current = head;
	prev = head;

	temp->data = data;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
	}
	else
	{
		while (current != NULL)
		{
			prev = current;
			current = current->next;
		}
		prev->next = temp;
	}
	return head;

}

void Print(struct Node* p)
{
#if 1 // when you want to print the list in the right order 
	if (p == NULL) return;  // EXIT CONDITION
	printf("%d ", p->data);	//FIRST PRINT THE VALUE IN THE NODE 
	Print(p->next);			// RECURSIVE CALL
#endif

}

void ReverseRecursively(struct Node *p)
{
	if (p->next == NULL)
	{
		head = p;
		return;		
	}
	ReverseRecursively(p->next);
	struct Node* q = p->next;
	q->next = p;
	p->next = NULL;


}

int main()
{
	 head = NULL;

	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 5);   // 2 4 6 5
	Print(head);
	printf("\n");
	ReversePrint(head);

	return 0;
}





#endif
