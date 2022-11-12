#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


struct arr {
	int A[5]; 
	int size; 
	int length; 
};

void Delete(struct arr *Arr, int index){
	
	for (int i = index; i < Arr->length; i++) {
		Arr->A[i-1] = Arr->A[i];
	}

}

int main() {

	struct arr Arr;
	 
	Arr = { {3,8,6,3,5},5 * 4, 5 };
	 
	Delete(&Arr, 3);

}

