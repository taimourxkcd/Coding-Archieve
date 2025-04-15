#include <bits/stdc++.h>

using namespace std; 


const int N = 1e3+10;
int ar[N][N];
int pf[N][N];



int main(){


	int t;
	cin>>t;
	while(t--){
	int n, q;
	cin>>n>>q;
	int a[n+1];

	for(int i=1; i <=n; i++){
		cin>>a[i];
	}

		int forward[n+10];
		int backward[n+10];
		forward[0] = backward[n+1] = 0;


	for(int i = 1; i <= n; i++){
		forward[i] = __gcd(forward[i-1], a[i]);
		}

	for(int i = n; i >= 1; i--){
		backward[i] = __gcd(backward[i+1], a[i]);
		}

	while(q--){
		int l, r; 
		cin>>l>>r;
		int gc = 0;



		cout<< __gcd(forward[l-1], backward[r+1]) <<endl;
	}

 }	
	
}

input
1
3 3
2 6 9
1 1
2 2 
2 3


output
3
1
2
