//#include<iostream>
//#include<string>
//
//
//static uint32_t s_AllocCount = 0;
//
//void* operator new(size_t size) {
//	
//	s_AllocCount++;
//	std::cout << "Allocating " << size << " bytes\n";
//	return malloc(size);
//}
//
//
//void printString(std::string_view name) {
//
//	std::cout << name << std::endl;
//}
//
//
//int main() {
//
//	std::string name = " taimour afzal ";
//#if 0	
//	std::string firstname = name.substr(0, 3);
//	std::string lastname = name.substr(4, 7);
//#else
//	std::string_view firstname(name.c_str(), 3);
//	std::string_view lastname(name.c_str() + 1, 2);
//#endif
//	printString(firstname);
//	printString(lastname);
//
//	std::cout << s_AllocCount << " allocations" << std::endl;
//
//	std::cin.get();
//}