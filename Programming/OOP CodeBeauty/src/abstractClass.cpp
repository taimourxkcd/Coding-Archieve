#include<iostream>
using namespace std;

class SmartPhone {
public:
	virtual void TakeASelfie() = 0;
};

class Android :public SmartPhone {
public:
	void TakeASelfie() {
		cout << "Androif selfie ..." << endl;
	}
};

class Iphone :public SmartPhone {
public:
	void TakeASelfie() {
		cout << "Iphone selfie ..." << endl;
	}
};


int main() {
	SmartPhone* s1 = new Iphone();
	s1->TakeASelfie();


	return 0;
}



