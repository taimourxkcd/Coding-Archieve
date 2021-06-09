//#include<iostream>
//
//class Base {
//
//public:
//	Base() {
//		std::cout << "Base Constructed\n";
//	}
//	virtual ~Base() {
//		std::cout << "Base Destructed\n";
//	}
//};
//
//class Derived : public Base {
//
//public:
//	Derived() {
//		m_Array = new int[5];
//		std::cout << "Derived Constructed\n";
//	}
//	~Derived() {
//		delete m_Array;
//		std::cout << "Derived Destructed\n";
//	}
//
//private:
//	int* m_Array;
//
//};
//
//
//
//int main() {
//
//	Base* base = new Base();
//	delete base;
//	std::cout << "=------------------------------------------\n";
//	Derived* derived= new Derived();
//	delete derived;
//	std::cout << "=------------------------------------------\n";
//	Base* poly= new Derived();
//	delete poly;
//
//	std::cin.get();
//}