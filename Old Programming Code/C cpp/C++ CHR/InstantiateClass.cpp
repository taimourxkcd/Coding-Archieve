#include<iostream>
#include<string>

using string = std::string;

class Entity {
private:
	string m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const string& name) : m_Name(name) {}	

	const string& GetName() const { return m_Name; }
};


int main() {

	Entity* e;

	{
	Entity* entity = new Entity("Taimour");
	e = entity;
	std::cout << entity->GetName() << std::endl;
}
	std::cin.get();
	delete e;
}