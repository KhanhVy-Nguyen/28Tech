// Problem: [Set & Map]. Bài 13. Loại trừ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap13
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
	set<int> v1;
	set<int> v2;
	set<int> result;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		v1.insert(a);
	}
	for(int i=0; i<m; i++){
		int b; cin>>b;
		v2.insert(b);
	}	
	for(int x:v1){
		if(v2.find(x)==v2.end()){
			result.insert(x);
		}
	}
	for(int x:result) cout<<x<<" ";
}
