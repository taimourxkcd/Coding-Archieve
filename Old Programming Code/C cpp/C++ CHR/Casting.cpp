//#include<iostream>
//
//class Base {
//public:
//	Base() {
//		//std::cout << "Base Constructed" << std::endl;
//	}
//	
//	~Base() {
//		//std::cout << "Base Destructed" << std::endl;
//	}
//};
//
//
//class Derived : public Base {
//public:
//	Derived() {
//		//std::cout << "Derived Constructed" << std::endl;
//	}
//	
//	~Derived() {
//		//std::cout << "Derived Destructed" << std::endl;
//	}
//};
//
//class AnotherClass {
//public:
//	AnotherClass() {
//		//std::cout << "Derived Constructed" << std::endl;
//	}
//	
//	~AnotherClass() {
//		//std::cout << "Derived Destructed" << std::endl;
//	}
//};
//
//int main() {
//
//
//	Derived* derived = new Derived();
//
//	Base* base = derived;
//
//	Derived* ac = static_cast<Derived *>(ac); 
//
//	if (ac) {
//			
//	}
//
//
//	//double value = 5.525;
//	//double a = int(value) + 5.3;
//	//double s = static_cast<int>(value) + 5.3;
//	//std::cout << reinterpret_cast<AnotherClass*>(&value) << std::endl;
//
//	std::cin.get();
//}