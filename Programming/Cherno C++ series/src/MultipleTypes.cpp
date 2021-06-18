#include<iostream>
#include<variant>
#include<optional>


enum class ErrorCode {
	None = 0, NotFound = 1, NoAccess = 2
};

std::optional<std::string, ErrorCode> ReadFileAsString() {
	return {};
}


int main() {

	std::variant<::std::string, int> data;
	



	std::cout << sizeof(int) << "\n";
	std::cout << sizeof(std::string) << "\n";
	std::cout << sizeof(data) << "\n";
	
	data = "taimour";
	std::cout << std::get<std::string>(data) << std::endl;
	
	if (auto value = std::get_if<std::string>(&data)) {
		std::string& v = *value;
	}
	else {
		 
	}
	
	data = 2;
	std::cout << std::get<int>(data) << std::endl;
	
	std::cin.get();

}