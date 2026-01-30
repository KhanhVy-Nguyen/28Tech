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
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int q; cin>>q;
	while(q--){
		set<int> cnt;
		int l; cin>>l;
		for(int i=l; i<n; i++){
			cnt.insert(a[i]);
		}
		cout<<cnt.size()<<endl;
	}
}
