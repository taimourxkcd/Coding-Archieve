#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
}*head=NULL;


void create(int data) {

	Node* t = new Node[sizeof(Node)];
	t = head;
	if (head == NULL) {
		Node* temp = new Node[sizeof(Node)];
		temp->data = data;
		temp->next = NULL;
		head = temp;
	}
	else {
		while (t->next != NULL) {
			t = t->next;
			}
			Node* temp = new Node[sizeof(Node)];
			temp->data = data;
			temp->next = NULL;
			t->next = temp;
	}

}

void display() {
	Node* t = new Node[sizeof(Node)];
	t = head;
	while (t) {
		cout << t->data << " " << endl;
		t = t->next;
	}
}

int displayRecursively(Node *t) {
	if (t == NULL) return 0;
	cout << t->data << " ";
	displayRecursively(t->next);
}

void countAndSum() {
	Node* t = new Node[sizeof(Node)];
	t = head;
	int ct = 0;
	int sum = 0;
	while (t) {
		ct++;
		sum += t->data;
		t = t->next;
	}
	cout << "The total no of nodes: " << ct << endl;
	cout << "The sum of nodes: " << sum<<endl;
}

int main() {
	create(10);
	create(20);
	create(30);
	display();
	cout << endl;
	displayRecursively(head);
	cout << endl;
	countAndSum();
}x1