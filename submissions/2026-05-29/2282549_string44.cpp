// Problem: [Xâu Ký Tự]. Bài 44. Lũy thừa với cơ số lớn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string44
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

// k

ll powMod(ll n, ll m){
	ll res = 1;
	while(m != 0){
		if(m % 2 != 0){
			res = res % mod * n % mod;
			res %= mod;
		}
		n = n * n;
		n %= mod;
		m /= 2;
	}
	
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string n; cin>>n;
	ll m ; cin>>m;
	
	ll res = 0;
	
	for(int i = 0 ; i < n.size(); i++){
		res = res * 10 % mod + (n[i] - '0') % mod;
		res %= mod;
	}
	cout<<powMod(res, m);
}
