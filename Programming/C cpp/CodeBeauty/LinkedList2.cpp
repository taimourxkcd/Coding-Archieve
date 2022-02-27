
#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};
void printList(Node * n) {
    while (n != NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node**head, int newValue){
    // prepare a new node 
    Node* newNode = new Node(); 
    newNode->Value = newValue;
    // put it in front of our current head
    newNode->Next = *head; 
    // move head of the list to point to the newNode
    *head = newNode;
}

void insertAtTheEnd(Node** head, int newValue) {
    //prepare a node 
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    // If linked list is empty, newNode will be a head node
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    // Find the last Node 
    Node* last = *head; 
    while (last->Next!=NULL) {
        last = last->Next;
    }
    // Insert newNode after the last node (at the end)
    last->Next = newNode;
}

void insertAfter(Node*previous, int newValue) {
    //check if previous node is null
    if (previous == NULL) {
        cout << "Previous can not be NULL" << endl;
        return; 
    }
    // prepare a newnode
    Node* newNode = new Node();
    newNode->Value = newValue;
    // insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next = newNode; 

}
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;
    //insertAtTheFront(&head, -1);
    //insertAtTheFront(&head, -2);
    //insertAtTheEnd(&head, 4);
    //insertAtTheEnd(&head, 5);
    insertAfter(head, -1);
    insertAfter(second, -2);

    printList(head);

    system("pause>0");
}