//#include<cstdlib>
//#include<iostream>
//#include<string>
//#include<vector>
//#include <numeric>
//
//std::vector<int> Range(int start, int max, int step);
//
//int main() {
//	
//	std::vector<int> range = Range(1, 10, 2);
//	for (auto y: range) std::cout << y << "\n";
//
//
//		return 0;
//}
//
//std::vector<int> Range(int start, int max, int step) {
//	int i = start;
//
//	std::vector<int> range;
//	while (i <= max) {
//		range.push_back(i);
//		i += step;
//	}
//
//	return range;
//}
//
//
//
///* 3 POINTERS
//int age = 34;
//	assignAge(&age);
//
//	std::cout << "Pointer Age " << age <<
//		"\n";
//
//void assignAge(int* pAge) {
//	*pAge = 22;
//}
//
//*/
//
//
//
//
///*	2 POINTERS
//	
//	int age = 43;
//	int* pAge = NULL;
//
//	pAge = &age;
//
//	std::cout << "Address: " << pAge << "\n";
//
//	std::cout << "Value of the address: " <<
//		*pAge << "\n";
//
//	int intArray[] = { 1,2,3,4,5,6 };
//	int* pIntArray = intArray; // You do not have to put the & symbol in case of arrays
//
//	std::cout << "1st " << *pIntArray <<
//		" Address " << pIntArray << "\n";
//	pIntArray++;
//	std::cout << "2nd " << *pIntArray <<
//		" Address " << pIntArray << "\n";
//
//	pIntArray--;
//	std::cout << "2nd " << *pIntArray <<
//		" Address " << pIntArray << "\n";
//
//*/
//	/* 1 VECTORS
//
//	std::vector<int> myVec2(10);
//	std::iota(std::begin(myVec2), std::end(myVec2),
//		1);
//
//	
//	 
//	for(auto y: myVec2) {
//		if ((y % 2) == 0) {
//			std::cout << y << "\n";
//		}
//	}
//	
//
//	*/
