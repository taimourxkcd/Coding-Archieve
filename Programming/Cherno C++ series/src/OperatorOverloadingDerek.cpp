//#include<iostream>
//#include<cstdlib>
//#include<string>
//#include<vector>
//#include<ctime>
//#include<numeric>
//#include<cmath>
//#include<sstream>
//
//class Box {
//public:
//	double m_length, m_width, m_breath;
//	std::string m_boxString;
//	Box() {
//		m_length = 1, m_width = 1,	m_breath = 0;
//
//	}
//
//	Box(double l, double w, double b) {
//		m_length = l, m_width = w, m_breath = b;
//	}
//
//	Box& operator ++() {
//		m_length++;
//		m_width++;
//		m_breath++;
//		return *this;
//	}
//
//	operator const char* () {
//		std::ostringstream boxStream;
//		boxStream << "Box :" <<
//			m_length << "," <<
//			m_width << "," <<
//			m_breath;
//		m_boxString = boxStream.str();
//		return m_boxString.c_str();
//
//	}
//
//	Box operator +(const Box& box2) {
//		Box boxSum;
//		boxSum.m_length = m_length + box2.m_length;
//		boxSum.m_width = m_width + box2.m_length;
//		boxSum.m_breath = m_breath + box2.m_length;
//		return boxSum;
//	}
//
//
//	double operator [] (int x) {
//		if (x == 0) {
//			return m_length;
//		}
//		else if (x == 1) {
//			return m_width; 
//		}
//		else if (x == 2) {
//			return m_breath;
//		}
//		else {
//			return 0;
//		}
//	}
//
//
//	bool operator == (const Box& box2) {
//		return ( (m_length == box2.m_length) && 
//			(m_width == box2.m_width) &&
//			(m_breath == box2.m_breath));
//	}
//
//	bool operator < (const Box& box2) {
//		double thisSize = m_length + m_width + m_breath;
//		double box2Size = box2.m_length + box2.m_width + box2.m_breath;
//
//		if (thisSize < box2Size) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	
//	bool operator > (const Box& box2) {
//		double thisSize = m_length + m_width + m_breath;
//		double box2Size = box2.m_length + box2.m_width + box2.m_breath;
//
//		if (thisSize > box2Size) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	void operator = (const Box& boxToCopy) {
//		m_length = boxToCopy.m_length;
//		m_width = boxToCopy.m_width;
//		m_breath = boxToCopy.m_breath;
//	}
//};
//
//
//int main() {
//
//
//	Box box(10, 10, 10);
//	++box;
//	std::cout << box << "\n";
//	
//	Box box2(5, 5, 5);
//	std::cout << "Box1 + box2 = " <<
//		box + box2 << "\n";
//
//	std::cout << "Box Length : " <<
//		box[0] << "\n";
//
//	std::cout << std::boolalpha;
//	std::cout << " Are boxes equal : " <<
//		(box == box2) << "\n";
//
//	std::cout << "Is box < box2 : " <<
//		(box < box2) << "\n";
//	std::cout << "Is box > box2 : " <<
//		(box > box2) << "\n";
//
//	box = box2;
//	std::cout << box << "\n";
//
//	std::cin.get();
//	return 0;
//}
//
