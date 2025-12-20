// Problem: [Set & Map Cơ Bản]. Bài 10. Tập giao của ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic10
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	map<char,int> mp;
	int n,m ; cin>>n>>m;
	char a[n];
	for(int i=0; i<n; i++){
		char c; cin>>c;
		a[i]=c;
		mp[c]=1;
	}
	for(int i=1; i<m ;i++){
		char c; cin>>c;
		if(mp[c]==1) mp[c]=2;
	}
	for(char c:a){
		if(mp[c]==2) {
			cout<<c<<" ";
			mp[c]=0;
		}
	}
}
