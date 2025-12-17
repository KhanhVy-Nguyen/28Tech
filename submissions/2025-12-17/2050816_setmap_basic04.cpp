// Problem: [Set & Map Cơ Bản]. Bài 4. Set Map & find
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic04
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
	set<int> a;
	set<int> b;
	for(int i=1; i<=n; i++){
		int a1; cin>>a1;
		a.insert(a1);
	}
	for(int i=1; i<=m; i++){
		int b1; cin>>b1;
		b.insert(b1);
	}
	for(int e:a){
		if(b.count(e)==0) cout<<"29tech"<<" ";
		else cout<<"28tech"<<" ";
	}
}
