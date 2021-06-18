#include<iostream>
#include<array>
#include <vector>


void printValue(int value) {
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values)
		func(value);
}



int main() {
	
	
	std::vector<int> values = { 1,65,7,8,9 };
	ForEach(values, printValue); 



	std::cin.get();
}


        1
void helloWorld(int a) {
std::cout << "Hello world!!! Value:"<< a << std::endl;
}
	


/*typedef void(*helloWorldFunction)(int) ;

	helloWorldFunction function = helloWorld;

	function(8);*/

