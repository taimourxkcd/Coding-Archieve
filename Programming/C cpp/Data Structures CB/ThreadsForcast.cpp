#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<chrono>


//using namespace std;

using  std::cout;
using  std::endl;
using  std::map;
using  std::string;
using  namespace std::this_thread;
using   std::thread;
using namespace std::chrono_literals;




void RefreshForcast(map<string, int> forcastMap) {
	while (true)
	{
		for (auto& item : forcastMap) {
			item.second++;
			cout << item.first << " " << item.second << endl;

		}
		std::this_thread::sleep_for(2000ms);

	}
	
}

int main()
{

	map<string, int> forcastMap = {
		{"New York", 15},
		{"Mumbai", 20},
		{"Mumbai", 18},
		{"Berlin", 18},
	};

	thread bgworkerI(RefreshForcast, forcastMap);
	system("pause>nul");
}