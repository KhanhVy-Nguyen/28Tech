// Problem: [Lý Thuyết Số – Toán Học]. Bài 14. Trailing zero
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

long long legendre(long long n, long long p){
	ll res=0;
	for(ll i=p; i<=n; i*=p){
		res= ((res%mod) + (n/i)%mod)%mod;
	}
	return res;
}

int main(){
	ll n ; cin>>n;
	cout<<legendre(n,5ll);
	return 0;
}
