#include<iostream>
using namespace std;

void print(void* ptr,char type) {

	switch (type) {
	case 'i': cout << *((int*)ptr) << endl; break;// handle int 
	case 'c': cout << *((char*)ptr) << endl; break;// handle char 
	}
}

int main() {
	
	int n = 5;
	char letter = 'a';
	print(&n,'i');
	print(&letter,'c');
}
