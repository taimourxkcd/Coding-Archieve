#include<bits/stdc++.h>

using namespace std;

int check(){
	return true;
}

int main(){
int t;
cin>>t;
while(t--)
{
	string str;
	cin>>str;
	int count = 0;
	for(int i = 0 , j = str.size()-1; i < str.size()/2; i++,j-- ){
		if(str[i] == str[j]){
			count++;
		}
	}

	if(count == str.size()/2 )
		cout<<"YES"<<endl;
	else
		cout<<"No"<<endl;

}
}

