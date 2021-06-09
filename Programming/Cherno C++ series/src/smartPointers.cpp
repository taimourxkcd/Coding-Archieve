//#include<iostream>
//#include<string>
//#include<memory>
//
//
//class Entity {
//private:
//public:
//	Entity() {
//		std::cout << "created entity !!!" << std::endl;
//	}
//	
//	~Entity() {
//		std::cout << "destroyed pointer !!!" << std::endl;
//
//	}
//
//void print() {
//	// does something
//}
//
//};
//
//
//
//int main() {
//
//	{
//		 
//
//		std::shared_ptr<Entity> e0 ;
//		{
//		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//		//std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//		std::weak_ptr<Entity> weakEntity;
//		e0 = sharedEntity;
//
//
//		entity->print();
//		}
//
//	}
//	std::cin.get();
//}