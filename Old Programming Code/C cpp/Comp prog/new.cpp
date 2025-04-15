#include<bits/stdc++.h>

using namespace std; 

void printVec(vector< pair<int, int> > &v){
	for(int j = 0; j < v.size(); j++){
			cout<< v[j].first << " "<< v[j].second();
		}
		cout<<endl;
}

int main(){
	int N; 
	cin>>N;
	vector<int> v[N];

	for(int i = 0; i<N ; i++){
		int n;
		cin>>n;
		for(int j = 0; j < n; j++){
			int x,y;
			cin>>x>>y;
			v.push_back(make_pair(x,y));

		}
	}
	
		printVec(v);	
		
}