#include<iostream>

using namespace std; 

struct Stk{
	int top; 
	int size; 
	int* Arr;
}s;

void push(struct Stk *s , int a) {
	if (s->top == s->size - 1) {
		cout << "error" << endl;
	}


	 if(s->top == -1){
		 s->top++;
		s->Arr[s->top] = a;
	 }
	 else if (s->top > -1) {
		 s->top++;
		 s->Arr[s->top] = a;
	}
}


int pop(struct Stk* s) {
	int x;
	if (s->top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		x =  s->Arr[s->top];
		s->top--;
		return x;
	}
}

int main() {
	s.top = -1;
	s.size = 3;
	s.Arr = new int[s.size];
	push(&s,12);
	push(&s,2);
	push(&s,34);
	cout << pop(&s) << endl;
	cout << pop(&s) << endl;
	cout << pop(&s) << endl;
}