// Problem: [Xâu Ký Tự]. Bài 43. UCLN
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string43
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
	ll m; cin>>m;
	
	ll res = 0;
	for(int i = 0 ; i < s.size(); i++){
		res = (res * 10) % m + (s[i] - '0') % m;
		res %= m;
	}
	cout<<gcd(m, res);
	
}
