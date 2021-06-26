#include<stdio.h>
#include<map>
#include<string>
#include<iostream>

int main()
{
	std::map<int, std::string> nameMap;
	
	nameMap[1] = "Tom";
	nameMap[2] = "Max";
	nameMap[3] = "ali";
	nameMap[4] = "alisha";
	nameMap[5] = "wsd";

	nameMap.insert(std::pair<int, std::string>(6, "July"));
	nameMap.insert(std::pair<int, std::string>(7, "Aug"));
	nameMap.insert(std::pair<int, std::string>(9, "Sep"));
	nameMap.insert(std::pair<int, std::string>(9, "Oct"));

	std::cout << nameMap[3] << std::endl;
	std::cout << "Map size is "<< nameMap.size() << std::endl;
	std::cout << "Is empty "<< nameMap.empty() << std::endl;

	std::map<int, std::string>::iterator it1 = nameMap.find(5);
	nameMap.erase(it1);

	for (std::map<int, std::string>::iterator it = nameMap.begin();
		it != nameMap.end();
		it++)
	{
		std::cout<< it->first << " => "<<it->second<< std::endl;
	}

	std::map<int, std::string>::iterator it = nameMap.find(4);
	std::cout << "Key found = " << it->second << std::endl;


	nameMap.clear();
}