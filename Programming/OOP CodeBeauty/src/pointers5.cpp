//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int rows, cols;
//	cout << "Please enter the number of the rows and cols " << endl;
//	cin >> rows >> cols;
//
//	int** table = new int*[rows];
//	for (int i = 0;i < rows;i++) {
//		int table[i] = new int[cols];
//	}
//
//	table[1][2] = 88;
//	
//	
//	for (int i = 0;i < rows;i++) {
//		delete[] table[i];
//	}
//	delete[] table;
//	table = NULL;
//
//
//
//
//	return 0;
//}