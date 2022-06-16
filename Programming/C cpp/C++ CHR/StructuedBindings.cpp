#include<iostream>
#include<tuple>
#include<string>

std::tuple<std::string, int> CreatePerson() {
	return { "Taimour" , 24 };
}


int main() {

	auto[name, age] = CreatePerson();

	std::cout << name;

	std::cin.get();
	return 0;
}