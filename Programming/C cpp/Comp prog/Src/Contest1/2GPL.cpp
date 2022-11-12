#include<bits/stdc++.h>
using namespace std; 

// take a string. convert that into decimal from binary

int main(){

	int t; 
	cin>>t;
	while(t--){ 
		int n; 
		cin>>n;
		string str;
		cin>>str;
		long long result = 0; 
		long long power2 = 1;
		for(int i = str.size() - 1; i>=0; --i){
			int binary_digit = str[i] - '0';
			result = result + ( binary_digit * power2 );
			power2 = power2 *2;
		}
		cout<<result<<endl;
	}

}