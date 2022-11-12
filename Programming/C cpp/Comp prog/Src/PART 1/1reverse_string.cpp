#include<bits/stdc++.h>

using namespace std;

int check(){
	return true;
}

int main(){

int t;
cin>>t;

while(t--){

	string str;
	cin >> str; 
	string str_rev;
	for(int i = str.size() - 1; i >= 0; i-- ){
		str_rev.push_back(str[i]);
	}
	cout<<str_rev<<endl;
}
}