// Problem: [Vector]. Bài 4. Duyệt vector
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector04
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		v.push_back(a);
	}
	int l,r; cin>>l>>r;
	
	for(int i=l; i<=r; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(int i=r; i>=l; i--){
		cout<<v[i]<<" ";
	}
}
