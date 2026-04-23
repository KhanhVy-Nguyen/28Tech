// Problem: [Đệ Quy]. Bài 9. Lũy thừa nhị phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion09
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll binpow(int a, int b){
	if(b == 0) return 1;
	ll x = binpow(a, b / 2);
	
	if(b % 2 == 0){
		return ((x % mod) * (x % mod)) % mod;
	}
	else return ((x % mod) * (x % mod) % mod * (a % mod)) % mod;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int a,b; cin>>a>>b;
	cout<<binpow(a,b);
}
