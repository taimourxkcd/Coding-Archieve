#include<iostream>
#include<string>

#ifdef PR_DEBUG
#define print(x) std::cout<<x<<std::endl;
#else
#define print(x)
#endif

int main() {

	print("hello")
	std::cin.get();
}

#define MAIN int main()\
{\
	std::cin.get();\
}

MAIN