//#include<iostream>
//#include<string>
//
//class Entity {
//
//public:
//	int x;
//public:
//	void print() const { std::cout << "Hello" << std::endl; }
//};
//
//class scopedPtr {
//private:
//	Entity* m_Obj;
//public:
//	scopedPtr(Entity* entity)
//	:m_Obj(entity)
//	{
//	}
//	
//	~scopedPtr()
//	{
//		delete m_Obj;
//	}
//
//	Entity* operator -> () {
//		return m_Obj;
//	}
//	
//	const Entity* operator -> () const{
//		return m_Obj;
//	}
//
//};
//
//int main() {
//	
//	const scopedPtr entity = new Entity();
//	entity ->print();
//
//	std::cin.get();
//} 