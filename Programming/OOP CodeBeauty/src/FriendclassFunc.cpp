#include<iostream>

using namespace std;
// Note: a class can have multiple friend functions. It is important to choose your friends carefully 
// we can have both friend functions and friend classes 
//friendship is not inherited 

class EquilateralTriangle {
private:

	float a;
	float circumference;
	float area;
public:
	void setA(float length) {
		a = length;

		circumference = a * 3 ;

		area = (1.73 * a * a) / 4;
	}

	//friend void printResults(EquilateralTriangle);
	friend class Homework;
};

class Homework {
public:
void printResults(EquilateralTriangle et) {
	cout << "circumference = " << et.circumference << endl;
	cout << "area= " << et.area << endl;
    }

};





int main() {

	EquilateralTriangle	et;
	Homework H;
	et.setA(3);
	H.printResults(et);

	
}