//#include<iostream>
//#include<memory>
//
//#include<chrono>
//#include<array>
//
//
//class Timer {
//public:
//	Timer() {
//		m_StartTimePoint = std::chrono::high_resolution_clock::now();
//	}
//
//
//	~Timer() {
//		 Stop();
//
//	}
//
//	void Stop() {
//		auto endTimePoint = std::chrono::high_resolution_clock::now();
//		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimePoint).time_since_epoch().count();
//		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(m_EndTimePoint).time_since_epoch().count();
//
//
//		auto duration = end - start;
//		double ms = duration * 0.001;
//
//		std::cout << duration << "us (" << ms << "ms)\n";
//	}
//
//
//private:
//	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimePoint; 
//	std::chrono::time_point<std::chrono::high_resolution_clock> m_EndTimePoint; 
//};
//
//
//int main() {
//
//
//	struct Vector2 {
//		float x, y;
//	};
//
//
//	std::cout << "Make shared\n";
//	{
//	std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs; 
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++) {
//			sharedPtrs[i] = std::make_shared < Vector2>();
//		}
// 
//	}
//	
//
//
//	std::cout << "New shared\n";
//	{
//	std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs; 
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++) {
//			sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
//		}
// 
//	}
//	
//	
//	std::cout << "Make Unique\n";
//	{
//	std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs; 
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++) {
//			sharedPtrs[i] = std::make_unique<Vector2>();
//		}
// 
//	}
//
//
//
//
//
//
//	__debugbreak();
//}
//
//
//	/*	int value = 0;
//	{
//		Timer timer;  
//		for (int i = 0; i < 1000000000 ; i++) {
//			value += 2;
//		}
//	}
//	*/ 
//
