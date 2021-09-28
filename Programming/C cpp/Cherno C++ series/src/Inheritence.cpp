#include<iostream>

class Entity {
public:
	float X, Y;
	
	void Move(float xa,  float ya) {
		X += xa;
		Y += ya;

	}
};


class Player : public Entity {
	
public:
	const char* Name;
	float X, Y;
	
	
	
	void Move(float xa,  float ya) {
		X += xa;
		Y += ya;

	}
	
	void Print() {
		std::cout << Name << std::endl;
	}

};

int  main() {

	std::cout << sizeof(Player) << std::endl;

	Player player;
	player.Print();
	player.Move(2,3);
	player.X = 2;

	std::cin.get();
}