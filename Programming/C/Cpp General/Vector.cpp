#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main()
{
	std::vector<int> myVec; // You can also write is as myVec(10): it means your vector is of size 10
	myVec.push_back(10);
	myVec.push_back(20);
	myVec.push_back(30);
	myVec.push_back(40);

	std::cout << "the size of the vector is " << myVec.size() << std::endl;

	for (int i = 0; i < myVec.size(); i++)
	{
		std::cout << "Vectoer " << i << " " << myVec.at(i) << std::endl; // OR myVec[i] same result
	}

	std::cout<<std::endl;

	std::cout << "Vector size is " << myVec.empty() << std::endl;

	myVec.erase(myVec.begin());
	myVec.erase(myVec.begin() + 2);
	myVec.erase(std::remove(myVec.begin(), myVec.end(), 30), myVec.end());
	
	
	myVec.clear();

	

	for (int i = 0; i < myVec.size(); i++)
	{
		std::cout << "Vectoer " << i << " " << myVec.at(i) << std::endl; // OR myVec[i] same result
	}

	
}