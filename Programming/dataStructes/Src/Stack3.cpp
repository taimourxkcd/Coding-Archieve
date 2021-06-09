//     wow
//   CTRL + SPACE  
/*
Implements the stack 
Reverse a char array using the stack data structure 
Reverse a single linked list using the stack data structure 


*/
#if 0

#include<iostream>
#include<stack>


using namespace std;


struct Node 
{
	int data;
	Node* next;

};



class Stack
{
private:
	char A[101];
	int top;
public:
	void Push();
	void Pop();
	void Top();
	void IsEmpty();
};


struct Node* head;

void Reverse(char *C, int n) // SAME AS C[] in c because char array is always passed as by reference 
{
	stack<char> S;
	for (int i = 0; i < n; i++)
	{
		S.push(C[i]);
	}

	//loop for the pop
	for (int i = 0; i < n; i++)
	{
		C[i] = S.top();
		S.pop();
	}

}


void ReverseLinkedListUsingStack()
{
	if (head == NULL) return;
	
	stack<struct Node*> S;
	Node* temp = head;
	
	while (temp != NULL)
	{
		S.push(temp);
		temp = temp->next;
	}

	temp = S.top();
	head = temp;
	S.pop();

	while (!S.empty())
	{
		temp->next = S.top();
		S.pop();
		temp = temp->next;
	}

	temp->next = NULL;


}

void Print(struct Node* p)
{
#if 1 // when you want to print the list in the right order 
	if (p == NULL) return;  // EXIT CONDITION
	printf("%d ", p->data);	//FIRST PRINT THE VALUE IN THE NODE 
	Print(p->next);			// RECURSIVE CALL
#endif

}



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

int main()
{
#if 0
	char C[100];
	printf("Enter a string ");
	gets_s(C);
	Reverse(C, strlen(C));
	printf("Output = %s",C);
#endif	

	head = NULL;
	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 5);
	Print(head);
	ReverseLinkedListUsingStack();
	Print(head);



	return 0;
}


#endif