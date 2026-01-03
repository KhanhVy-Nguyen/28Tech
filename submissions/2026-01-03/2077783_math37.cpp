// Problem: [Lý Thuyết Số – Toán Học]. Bài 37. Lũy thừa
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math37
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll pow_mod(ll a, ll b) {
    ll result = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

int main(){
	ll a,b; cin>>a>>b;
	ll res=pow_mod(a,b);
	cout<<res;
	return 0;
}
