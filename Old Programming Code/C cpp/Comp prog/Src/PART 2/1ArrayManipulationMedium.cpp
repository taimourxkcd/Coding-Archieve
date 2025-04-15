#include <bits/stdc++.h>

using namespace std;

const int N = 1e7+10;
long long int ar[N];

int main() {
	int n,m;
	cin>>n>>m;

	while(m--){
		int a, b, d;
		cin>>a>>b>>d;
		ar[a] += d;
		ar[b+1] -= d;
	}

	for(int i = 1; i <= n; i++){
		ar[i] += ar[i-1];
	}

	long long mx = -1;
	for(int i = 1 ; i<= n; i++){
		if(mx<ar[i]){
			mx= ar[i];
		}
	}

	cout<<mx<<endl;


}
/*
// we run the code for m no of test cases 
// n is an array that can be anywhere b/w can be between 3 to 10^7
// we take the array from a to b and add d inside each element
// at the end we find the maximum element in the array

input
5 3
1 2 100
2 5 100
3 4 100


output
200

*/