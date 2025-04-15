#include<iostream>
#include<string>

struct Vector3 {
	float x, y, z;
};

int main() {

	int offset = (int)&((Vector3)0)->x;
	std::cout << offset << std::endl;
	std::cin.get();
}