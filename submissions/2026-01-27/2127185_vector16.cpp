// Problem: [Vector]. Bài 16. Truy vấn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector16
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,q; cin>>n>>q;
	vector<vector<int>> v(n);
	for(int i=0; i<n; i++){
		int m; cin>>m;
		for(int j=0; j<m; j++){
			int value; cin>>value;
			v[i].push_back(value);
		}
	}
	for(int i=0; i<q; i++){
		int x,y; cin>>x>>y;
		x--; y--;
		cout<<v[x][y]<<endl;
	}
}
