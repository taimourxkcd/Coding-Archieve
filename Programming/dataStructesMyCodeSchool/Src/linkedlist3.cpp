/*
ROBUST
DELETES ELEMENTS INTO THE LINKED LIST
PRINTS THEM ONTO THE SCREEN
*/

#if 0

#define scan scanf_s


#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* next;
};


struct Node* head;		// GLOBAL VARIBALE 

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

void Delete(int n)
{

	struct Node* temp1 = head;
	int i; 

	//when we have to delete the first node 
	if (n == 1)
	{
		head = temp1->next; // head now points to the second node 
		free(temp1);
		return;
	}

	for (i = 0; i < n - 2; i++)
		temp1 = temp1->next;
	// temp1 points to (n-1)th node


	struct Node* temp2 = temp1->next; // nth node 
	temp1->next = temp2->next;		  // (n+1)th node 
	free(temp2);
}


int main()
{
		head = NULL;
		Insert(2);
		Insert(4);
		Insert(6);
		Insert(5);   // 2 4 6 5
		Print();


		int n;
		printf("Eneter a position \n");
		scan("%d",&n);
		Delete(n);
		Print();
		return 0;
}

#endif