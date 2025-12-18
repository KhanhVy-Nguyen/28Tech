// Problem: [Set & Map Cơ Bản]. Bài 5. Set Map & count
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic05
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	set<int> a;
	multiset<int> b;
	int n,m; cin>>n>>m;
	for(int i=1; i<=n; i++){
		int a1; cin>>a1;
		a.insert(a1);
	}
	
	for(int i=1; i<=m; i++){
		int b1; cin>>b1;
		b.insert(b1);
	}
	for(auto it=a.begin(); it!=a.end(); it++){
		cout<<b.count(*it)<<" ";
	}
	
}
