#include<iostream>

void printEntity(Entity& e);

class Entity {
public :
	int x, y;

	Entity(int x, int y) {
		
		this->x = x;
		this->y = y;

		printEntity(*this); 

	}

	int GetX() const {
		const Entity& e = *this;
	}
};

void printEntity(Entity& e) {

}

int main() {

	std::cin.get();
}