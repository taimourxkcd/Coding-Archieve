#include<iostream>
#include<string>

struct Vector {
	float x, y, z;
	
	Vector() 
		:x(10),y(11),z(13)
	{

	}

};

int main() {

	int value = 5;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	Vector vector;
	Vector* hvector = new Vector();
	


	int* hvalue = new int;
	*hvalue = 5;
	
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;


	delete hvalue;
	delete[] harray;
	delete hvector;

	std::cin.get();
}