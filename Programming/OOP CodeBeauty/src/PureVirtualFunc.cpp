//#include<iostream>
//using namespace std;
//
//class instrument {
//public:
//	virtual void makeSound() = 0; // Now this has become the pure virtual function 
//};
//
//class Accordin :public instrument {
//public:
//	void makeSound() {
//		cout << "accordin is playing ..." << endl;
//	}
//};
//
//class Piano :public instrument {
//public:
//	void makeSound() {
//		cout << "piano is playing ..." << endl;
//	}
//};
//
//
//int main() {
//	instrument* i1 = new Accordin;
//	i1->makeSound();
//	instrument* i2 = new Piano;
//	i2->makeSound();
//
//	instrument* instruments[] = { i1,i2 };
//	for (int i = 0;i < 2;i++) {
//
//		instruments[i]->makeSound();
//	}
//
//	return 0;
//}
//
//
//
