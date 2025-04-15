
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

	int a = 2;
	int* b = new int[50];

	Entity* e = new Entity();

	delete e;
	delete[] b;
	std::cin.get();
	
}
