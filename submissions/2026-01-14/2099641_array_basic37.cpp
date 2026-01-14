// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 37. Tìm kiếm trong mảng 1 chiều
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic37
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[10005];

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		mark[a[i]]=1;
	}
	
	int t; cin>>t;
	while(t--){
		int t1; cin>>t1;
		if(mark[t1]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}
