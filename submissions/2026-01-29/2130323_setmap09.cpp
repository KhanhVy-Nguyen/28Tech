// Problem: [Set & Map]. Bài 9. Union
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap09
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
	set<int, greater<int>> a;
	for(int i=0; i<n; i++){
		int an; cin>>an;
		a.insert(an);
	}
	for(int i=0; i<m ;i++){
		int bm; cin>>bm;
		if(a.count(bm) == 0){
			a.insert(bm);
		}
	}
	for(int x:a) cout<<x<<" ";
	
}
