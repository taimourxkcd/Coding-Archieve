#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<chrono>
#include<thread>
#include<string.h>
#include<math.h>
#include<memory>
#include<fstream>
using namespace std;


//knapsack globals 
int* profit = new int[50];
int* weight = new int[50];
int max_weight;
//knapsacks global end

// random globals 
int ITERATION = 1;
float NANOSECONDS = 0;

// block that controls writing the data into the file 
class FileHandling {
public:
	FILE* stream;
	errno_t err;

	void writeData(float data, int select) {
		std::string s = std::to_string(data);
		ofstream ofs;

		switch (select)
		{
		case 1:
			ofs.open("knapsack.txt", ios_base::app);
			ofs << "The net profit is			 :" << s;
			ofs << "\n";
			ofs.close();

			break;
		case 2:
			ofs.open("knapsack.txt", ios_base::app);
			ofs << "The total memory consumed is          :" << s << " bytes";
			ofs << "\n";
			ofs.close();
			break;
		case 3:
			ofs.open("knapsack.txt", ios_base::app);
			ofs << "The total time taken was              :" << s << " nano seconds";
			ofs << "\n";
			ofs.close();
			break;
		case 4:
			ofs.open("knapsack.txt", ios_base::app);
			ofs << "\n\n";
			ofs.close();
			break;
		case 5:
		//	ofs.open("knapsack.txt", ios_base::app);

		//	ofs << "ITERATION NUMBER " << ITERATION << "\n";
		//	ITERATION++;
		//	ofs.close();
			break;

		default:
			printf("You have an error \n");

		}
	}
};
// block that controls writing the data into the file ends 



// block controlling memory accesses 
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
	return malloc(size);
}

void operator delete(void* memory, size_t size)
{
	s_AllocationMatrics.TotalFreed += size;
	free(memory);
}

static float printMemoryUsuage()
{
	return s_AllocationMatrics.CurrentUsuage();
}
// memory accesses controi block end here





// timer class to benchmark the timing  
struct Timer {

	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer() {
		auto start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		NANOSECONDS = ms;
		//std::cout << "Timer took " << ms * 0.00000001 << " nano" << std::endl;
	}
};
// timer class ends here



	// solving the knapsack problem using the greedy method
void knapsack(int profit[], int weight[], int n)
{
	FileHandling file;
	Timer timer;
	int i, j;
	float max_profit = 0.0, temp;

	float* p_w = new float[50];
	float* select = new float[50];



	for (i = 0;i < n;i++)//calculating per weight profit
	{
		p_w[i] = (profit[i] * 1.0) / weight[i];
		select[i] = 0;
	}
	for (i = 1;i < n;i++)//sorting according to per weight profit
	{
		for (j = 0;j < n - i;j++)
		{
			if (p_w[j] <= p_w[j + 1])
			{
				temp = p_w[j];
				p_w[j] = p_w[j + 1];
				p_w[j + 1] = temp;

				temp = weight[j];
				weight[j] = weight[j + 1];
				weight[j + 1] = temp;

				temp = profit[j];
				profit[j] = profit[j + 1];
				profit[j + 1] = temp;

			}
		}
	}

	printf("\n");
	for (i = 0;i < n;i++)
	{
		if (weight[i] <= max_weight)
		{
			select[i] = 1.0;
			max_weight -= weight[i];
		}
		else
		{
			select[i] = (max_weight * 1.0) / weight[i];
			break;
		}
	}

	for (i = 0;i < n;i++)
	{
		max_profit += (select[i] * profit[i]);
	}

	// writing data into the file 
	file.writeData(0, 5);
	file.writeData(max_profit, 1);
	file.writeData(printMemoryUsuage(), 2);
	file.writeData(NANOSECONDS * 0.00000001, 3);
	file.writeData(0, 4);
}
// end of knapsack problem


int main() {

	int count = 0;
	int temp1 = 123;
	int temp2 = 321;
	int temp3 = 231;
	
	// knapsack driver program 
	int n, i;
		n =  5;
	for (i = 0;i < 50;i++)
	{
		for (i = 0;i < n;i++)
		{
			profit[i] = temp1 + rand() % 100 ;
			weight[i] = temp2 + rand() % 100;
		}
		max_weight = rand() % 500;

		count++;
		knapsack(profit, weight, n);
	}
	
	printf("TOTAL NUMBER OF ITERATIONS WERE %d", count);
	// end of knapsack driver program 

	return(0);
}

