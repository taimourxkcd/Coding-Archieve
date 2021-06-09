//#include<iostream>
//#include <cassert>
//using namespace std;
//
//
//int main() {
//	
//	enum access_t { read = 1, write = 2, exec = 4 }; // enumerators: 1, 2, 4 range: 0..7
//	access_t rwe = static_cast<access_t>(7);
//	assert((rwe & read) && (rwe & write) && (rwe & exec));
//
//	access_t x = static_cast<access_t>(8.0); // undefined behavior since C++17
//	access_t y = static_cast<access_t>(8); // undefined behavior since C++17
//
//	enum foo { a = 0, b = UINT_MAX }; // range: [0, UINT_MAX]
//	foo x = foo(-1); // undefined behavior since C++17, even if foo's underlying type is unsigned int
//
//}