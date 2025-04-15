#include<bits/stdc++.h>

using namespace std; 


// take the string. convert upper to lower and vice versa 
// then add ascii value if captial else subtract 
// take the abs value of result obtained 
// if prime then print 1 else print 0

char upper(char c){
	return c - 32;
}

char lower(char c){
	return c + 32;
}

int main(){

	string s; 
	cin>>s;
	for(int i =0; i< s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = upper(s[i]);
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = lower(s[i]);
		}
	}
	
	int result = 0;

	for(int i =0; i< s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			result = result - s[i];	
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			result = result + s[i];	
		}
	}

	if(result < 0){
		result = result * (-1);
	}

	int flag = 0;
	for(int i = 2; i <result; i++){
		if(result % i == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout<<1;
	}else{
		cout<<0;
	}



}