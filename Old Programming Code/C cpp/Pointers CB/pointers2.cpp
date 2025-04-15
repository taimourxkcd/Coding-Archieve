#include<iostream>
using namespace std;



int main() {

	int a[] = { 1,2,3,4,5 };

	//cout << a << endl;
	//cout << *(a+2) << endl;
	cout << sizeof(a) << endl;


	for (int i = 0;i < sizeof(a)/sizeof(int);i++) {
		cout << (a + i) << endl;
	}


}
