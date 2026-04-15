// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 25. Mảng 012
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced25
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n ; cin>>n;
	map<int,int> mp;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		mp[value]++;
	}
	
	for(int i = 0; i < mp[0]; i++){
		cout<<0<<" ";
	}
	for(int i = 0; i < mp[1]; i++){
		cout<<1<<" ";
	}
	for(int i = 0; i < mp[2]; i++){
		cout<<2<<" ";
	}
}
