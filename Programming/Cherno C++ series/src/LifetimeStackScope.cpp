//#include<iostream>
//#include<string>
//
//class Entity {
//private:
//public:
//	Entity() {
//		std::cout << "Created entity!!!" << std::endl;
//	}
//	
//	~Entity() {
//		std::cout << "Destroyed entity!!!" << std::endl;
//	}
//};
//
//class ScopedPtr {
//private:
//	Entity*  m_ptr;
//public:
//	ScopedPtr(Entity* ptr)
//	: m_ptr( ptr)
//	{
//	}
//
//	~ScopedPtr()
//	{
//		delete m_ptr;
//	}
//
//
//};
//
//int main() {
//
//
//	int array[50];
//	{
//		ScopedPtr e = new Entity();
//		Entity* e = new Entity();
//	}
//
//
//
//
//	std::cin.get();
//}