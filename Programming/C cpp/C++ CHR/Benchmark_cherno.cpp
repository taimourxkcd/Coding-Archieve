#include<iostream>
#include<memory>

#include<chrono>

using namespace std;


class Timer{
public:

	// timer starts with the constructor and gets destroyed when it ends
	Timer(){
		m_StarTimepoint = std::chrono::high_resolution_clock::now();
	}


	~Timer(){
		Stop();
	}

	void Stop(){

		auto endTimepoint = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast <std::chrono::microseconds>(m_StarTimepoint).time_since_epoch().count();
		auto end = std::chrono::time_point_cast <std::chrono::microseconds>(endTimepoint).time_since_epoch().count();

		auto duration = end - start;
		double ms = duration * 0.001;

		std::cout << duration << "us (" << ms << "ms)\n";
		std::cout << ms << "us\n";
	}



	private:
        std::chrono::time_point<std::chrono::high_resolution_clock>m_StarTimepoint;



};



int main(){
	int value = 0;

	{

	Timer timer;
	for (int i = 0; i < 1000000 ; i++)
      value += 2;
     }

   std::cout << value << std::endl;

   //__debugbreak();


}
