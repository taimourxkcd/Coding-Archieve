#include<iostream>
#include<stdio.h>

using namespace std;

void findSum(int arr[], int *first, int *second, int target, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] + arr[j] == target)
			{
				*first = i;
				*second = j;
			}
		}
	}
}

int main() {
	int arr[] = { 2,4,11,15,2,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int first, second;
	int target = 9;
	findSum(arr, &first, &second,target, len);
	cout << first << endl;
	cout << second << endl;
}


