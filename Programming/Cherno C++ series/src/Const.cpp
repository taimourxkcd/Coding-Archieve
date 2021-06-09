//#include<iostream>
//
//class Entity {
//private:
//	int  m_X, m_Y;
//	mutable int var;
//public:
//
//	int GetX() const {
//		
//		var = 2;
//		return m_X;
//	}
//
//	void SetX(int x) {
//		m_X = x;
//	}
//};
//
//void printEntity(const Entity& e) {
//	std::cout << e.GetX() << std::endl;
//}
//
//
//
//int main() {
//
//	Entity e;
//
//	const int MAX_AGE = 90;
//
//	const int* a = new int;
//	
//	*a = 2;
//	a = (int*)&MAX_AGE; 
//	std::cout << *a << std::endl;
//
//
//	std::cin.get();
//}