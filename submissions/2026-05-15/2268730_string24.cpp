// Problem: [Xâu Ký Tự]. Bài 24. Xâu đầu cuối
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string24
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
    
	string s; cin>>s;
	map<char, ll> mp;
	for(auto x : s){
		mp[x]++;
	}
	
	ll total = 0;
	for(auto it : mp){
		ll n = it.second;
		total += n * (n + 1) / 2;
	}
	
	cout<<total;
}
