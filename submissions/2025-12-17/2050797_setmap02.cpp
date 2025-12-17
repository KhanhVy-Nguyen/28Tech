// Problem: [Set & Map]. Bài 2. Truy vấn phần tử
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap02
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	set<int> sam;
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		sam.insert(a);
	}
	int q; cin>>q;
	while(q--){
		int j; cin>>j;
		if(sam.find(j)==sam.end()) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
