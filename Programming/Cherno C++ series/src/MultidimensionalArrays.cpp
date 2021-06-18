#include<iostream>
#include<array>

int main() {

	int** a2d = new int* [5];
	for (int i = 0; i < 5; i++)
	{
		a2d[i] = new int[5];
	}
	
	a2d[0][0] = 0;
	a2d[0][1] = 0;
	a2d[0][2] = 0;

	 
	for (int i = 0; i < 5; i++)
	{
		delete[] a2d[i];
	}


	/*int*** a3d = new int** [50];
	for (int i = 0; i < 50; i++) 
	{
			a3d[i] = new int*[50];
			for (int j = 0; j < 50; j++) 
			{
				int** ptr = a3d[i];
				ptr[j] = new int[50];
			}
	}
	
	a3d[0][0][0] = 0;
	*/
	
		
		std::cin.get();
} 