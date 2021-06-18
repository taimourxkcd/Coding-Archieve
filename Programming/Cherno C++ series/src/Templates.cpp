#include<iostream>
#include "Templates.h"
#include<string>


template<typename T,int N>

class Array {
private:
	T m_Array[N];
public:
	int GetSize() const { return N; }
};

int main() {

	Array<int, 5> array;
	Array<std::string, 50> array;

	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}