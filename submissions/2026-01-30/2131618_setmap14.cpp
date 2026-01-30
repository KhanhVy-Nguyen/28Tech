// Problem: [Set & Map]. Bài 14. Suffix and Query
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap14
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
	
	set<int> s;
	int count[n];
	for(int i=n-1; i>=0; i--){
		s.insert(v[i]);
		count[i]=s.size();
	}
	
	int q; cin>>q;
	while(q--){
		int l; cin>>l;
		cout<<count[l]<<endl;
	}
}
