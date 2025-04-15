#include<iostream>
#include<string>
#include<stdlib.h>

int main() {

	using namespace std::string_literals;

	std::u32string name0 = U"Cherno"s + U" hello";

	const char* example = R"(Line1
Line2
Line3
Line4)";

	const char* ex = "Line1\n"
		"Line2\n"
		"Line3\n";

	const char* name = u8"cherno";
	const wchar_t* name2 = L"Cherno";

	const char16_t* name3 = u"Cherno";
	const char32_t* name4 = U"Cherno";
	std::cin.get();
}