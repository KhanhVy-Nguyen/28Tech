// Problem: [Xâu Ký Tự]. Bài 42. Phép chia dư
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string42
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string n; cin>>n;
	ll m ; cin>>m;
	
	
	ll r = 0;
	for(auto x : n){
		int digit = x - '0';
		r = (r * 10 + digit) % m;
	}
	
	cout<<r;
}
