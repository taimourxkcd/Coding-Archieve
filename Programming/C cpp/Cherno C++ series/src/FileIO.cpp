#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<ctime>
#include<numeric>
#include<cmath>
#include<sstream>

#include<fstream>

int main() {

	std::ofstream writeToFile;
	std::ifstream readFromFile;
	std::string txtToWrite = "";
	std::string txtFromFile = "";

	writeToFile.open("test.txt", std::ios_base::out |
		std::ios_base::trunc);

	if (writeToFile.is_open()) {
		writeToFile << "Beginning of the file\n";
		std::cout << "Enter data to write  :";
		getline(std::cin, txtToWrite);
		writeToFile << txtToWrite; 
		writeToFile.close();
	}

	readFromFile.open("test.txt", std::ios_base::in);
	if (readFromFile.is_open()) {
		while (readFromFile.good()) {
			getline(readFromFile, txtFromFile);
			std::cout << txtFromFile<<"\n";
			readFromFile.close();



		}
	}


	return 0;
}