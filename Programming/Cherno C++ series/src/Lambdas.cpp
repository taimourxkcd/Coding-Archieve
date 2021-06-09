//#include<array>
//#include <vector>
//#include <iostream>
//#include<functional>
//#include<algorithm>
//
//
//void ForEach(const std::vector<int>& values, void(*func)(int), const std::function<void(int)>& func) {
//	for (int value : values)
//		func(value);
//}
//
//
//
//int main() {
//
//
//	std::vector<int> values = { 1,65,7,8,9 };
//	std::find_if(values.begin(), values.end(), [](int value) {return value > 3;});
//
//
//	int a = 5;
//
//	auto lambda =  [=](int value) {std::cout << "value: " << a << std::endl;};
//	
//	ForEach(values, lambda);
//
//
//
//	std::cin.get();
//}