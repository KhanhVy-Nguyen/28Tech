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
	int row, column; cin>>row>>column;
	vector <int> v;
	for(int i=0; i<column; i++){
		for(int j=0; j<row; j++){
			int a; cin>>a;
			v.push_back(a);
		}
		reverse(v.begin(), v.end());
		
		for(int x:v) cout<<x<<" ";
		cout<<endl;
		v.clear();
	}
}
