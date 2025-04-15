#include<bits/stdc++.h>

using namespace std; 

class LowerTri{
private:
	int n;
	int *A;

public:
	LowerTri(){
		n=2;
		A = new int[2*(2+1)/2];
	}
	LowerTri(int n){
		this->n = n;
		A = new int[n*(n+1)/2];
	}

	~LowerTri(){
		delete[] A;
	}


	void Set(int i, int j, int x);
	int Get(int i, int j);
	void Display();
	int getDimension(){return n;}


};


void LowerTri::Set(int i, int j, int x){
	if(i>=j)
	{
		A[n*(j-1)-(j-2)*(j-1)/2+i-j] = x;
	}	
}

int LowerTri::Get(int i, int j){
	if(i>=j){
		return A[i*(i-1)/2+j-1];
	}else{
	return 0;}
}

void LowerTri::Display(){
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			if(i>=j){
				cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
			}else{
				cout<<"0 ";
			}
		}
	cout<<endl;
	}
} 


int main(){

	LowerTri matrix(5);
	matrix.Set(1,2,4); 
	matrix.Set(3,2,4); 
	matrix.Set(2,2,4); 
	matrix.Set(3,2,4); 
	matrix.Display();
}