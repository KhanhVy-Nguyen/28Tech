// Problem: [Xâu Ký Tự]. Bài 47. UCLN
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string47
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
    
	string a; cin>>a;
	ll x,y; cin>>x>>y;
	ll g = gcd(x,y);
	for(int i = 0 ; i < g; i++){
		cout<<a;
	}
}
