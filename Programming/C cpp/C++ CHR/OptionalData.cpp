#include<iostream>
#include<fstream>
#include<optional>

std::optional<std::string> ReadFileString(const std::string& filepath) {

	std::ifstream stream(filepath);
	if (stream)
	{

		std::string result;
		 Read file
		stream.close();
		return result;
	}
	
	return {};

}

int main() {
	

	std::optional<std::string> data = ReadFileString("data.txt");
	
	std::string value = data.value_or("Not present");
	std::cout << value << std::endl; 

	if (data) {
		std::cout << "File read successfully\n";
	}
	else {
		data.value();
		std::cout << "File could not be opened successfully\n";
	}





	std::cin.get();
}