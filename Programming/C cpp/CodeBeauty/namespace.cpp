#include<string>
#include<iostream>

using namespace std;

namespace namespace1 {
	int age = 25; 
	string name = "Taimour";
}

namespace namespace2 {
	int age = 35;
}


int main() {
	cout << namespace1::age << endl;
	cout << namespace1::name << endl;
	cout << namespace2::age;

}