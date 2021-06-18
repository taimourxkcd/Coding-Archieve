#include<iostream>
#include<string>


class Printable {
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable{
public:
	virtual std::string GetName(){
		return "Entity";
	}

	std::string GetClassName() { return "Enttiy"; }
	
};

class Player : public Entity{
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name){}

	std::string GetName() { return m_Name; }
	std::string GetClassName() { return "Cherno"; }
};

class A : public Printable {
public:
	std::string GetClassName() override { return "A"; }
};

void printName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj) {
	std::cout << obj->GetClassName() << std::endl;
}


int main() {
	Entity* e = new Entity();
	printName(e);


	Player* p = new Player("Cherno");
	printName(p);
	

	
	Print(e);
	Print(p);
	Print(new A());



	std::cin.get();
}