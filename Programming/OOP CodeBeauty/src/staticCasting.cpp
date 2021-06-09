//#include<iostream>
//#include<sstream>
//#include<string.h>
//#include<stdlib.h>
//#include<stdio.h>
//using namespace std;
//string x;
//#define LOG(x) std::cout<<x<<endl;

//class Int {
//	int x;
//public:
//	Int(int x = 0) :x{ x } { LOG("CONVERSION CONSTRUCTOR"); }
//	operator string () {
//		LOG("CONVERSION OPERATOR");
//		return to_string(x);
//	}
//};

//class BASE{};
//class Derived : public Base {};


//class Base{};
//class Derived1: public Base{};
//class Derived2: public Base{};

//int main() {
//
//
//	//static cast should be prefered when converting to void* OR from void*
//	int i = 10;
//	void* v = static_cast<void*>(&i);
//	void* ip = static_cast<void*>(&i);
//	return 0;
//}

	// use for all upcast but never use for confused down cast
	//Derived1 d1;
	//Derived1 d2;
	//Base* bp1 = (Base*)&d1;
	//Base* bp1 = (Base*)&d2;
	//Derived* d1p = static_cast<Derived1*>(bp2);
	//Derived* d2p = static_cast<Derived1*>(bp1);




	//static cast avoid cast from the derived to private base pointer
	/*Derived d1;
	Base* bp1 = (Base*)&d1;
	Base* bp2 = static_cast<Base*>(&d1);
	*/


	/*char c ;
	int* p = (int*)&c;	*/
	//*p = 5;			// PASS at compile time but fails at run time thats why it is dangerous 
	//int* ip = static_cast<int*>(&c); // THIS WILL FAILE TO COMPILE BECASUE NOT COMPATIBLE POINTER TYPES


	////use static case when conversion between types is provided through conversion operator or conversion 
	//// constructor 
	//Int obj(3);
	//string str1 = obj;
	//obj = 20;
	//string str2 = static_cast<string>(obj);
	//obj = static_cast<Int>(30);
	//
	
	
	//implicit conversion between types
	// we use static cast in code becaues c style cast is difficult to find in the code
	/*float f = 4.4;
	int a;
	a = f;
	a = static_cast<int>(f);
	LOG(a);
	LOG(f);*/




