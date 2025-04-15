#include <bits/stdc++.h>

using namespace std; 


const int N = 1e7;
int hsh[N];

int main(){

	int n;
	cin>>n; 
	int a[n];
	for(int i = 0; i< n ; i++){
		cin>>a[i];
		hsh[a[i]]++;
	}


	int t;
	cin>>t;
	while(t--){
	int x;
	cin>>x;
	cout<<hsh[x]<<endl;


	}

}
input
6
3 5 5 7 7 8
5
3
7
5
8
9

output
1
2
2
1
0
