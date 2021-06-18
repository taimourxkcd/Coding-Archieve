#if 0

#include<iostream>
#include<memory>


struct AllocationMatrics
{
	uint32_t TotalAllocated = 0;
	uint32_t TotalFreed = 0;

	uint32_t CurrentUsuage() { return TotalAllocated - TotalFreed; }
};

static AllocationMatrics s_AllocationMatrics;


struct Object
{
	int x, y, z;
};

void* operator new(size_t size) {
	s_AllocationMatrics.TotalAllocated += size;
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
}

void operator delete(void* memory, size_t size)
{
	s_AllocationMatrics.TotalFreed += size;
	std::cout << "freeing " << size << " bytes\n";
	free(memory);
}

static void printMemoryUsuage()
{
	std::cout << "Memory Usuage: " << s_AllocationMatrics.CurrentUsuage() << " bytes\n";
}
int main()
{
	printMemoryUsuage();
	std::string string = "taimour";
	printMemoryUsuage();
	{
		std::unique_ptr<Object> obj = std::make_unique<Object>();
		printMemoryUsuage();
	}
	printMemoryUsuage();

	//Object* obj = new Object;

	std::cin.get();
	return 0;
}


#endif