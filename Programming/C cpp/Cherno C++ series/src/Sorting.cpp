#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>


int main() {
	
	std::vector<int> values = { 3,4,5,1,89,8 };
	std::sort(values.begin(), values.end(), [](int a, int b) {
		
		if (a == 1)
			return false;
		if (b == 1)
			return true;
		return a < b;

		});

	for (int value : values) {
		std::cout << value << std::endl;
	}


	std::cin.get();
}