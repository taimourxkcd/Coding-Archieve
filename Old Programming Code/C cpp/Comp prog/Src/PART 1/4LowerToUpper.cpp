#include<bits/stdc++.h>

using namespace std;

int check(){
	return -1;
}

int main(){

	char *name;
	gets(name);
	cout<<name<<endl;

	name[0] = name[0] -32 ;
	for(int i = 0; name[i] != '\0'; i++  ){

		if(name[i] == ' '){
			name[i+1] = name[i+1] - 32;
		}
	}

	cout<<name<<endl;

}

