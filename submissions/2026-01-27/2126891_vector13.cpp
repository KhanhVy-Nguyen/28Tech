// Problem: [Vector]. Bài 13. Vector các vector
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector13
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m; cin>>n>>m;
	vector<vector<int>> v;
	for(int i=0; i<n; i++){
		vector<int> row;
		for(int j=0; j<m; j++){
			int a; cin>>a;
			row.push_back(a);
		}
		v.push_back(row);
	}
	
	for(int i=0; i<n; i++){
		reverse(v[i].begin(), v[i].end());
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
