// Problem: [Set & Map]. Bài 11. Difference
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap11
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
	set<int> s1;
	set<int> s2;
	set<int> result;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		s1.insert(a);
	}
	for(int i=0; i<m; i++){
		int b; cin>>b;
		s2.insert(b);
	}
	for(int x:s1){
		if(s1.count(x) && !s2.count(x)){
			result.insert(x);
		}
	}
	for(int x:result) cout<<x<<" ";
}
