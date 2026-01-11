// Problem: [Lý Thuyết Số – Toán Học]. Bài 31. Phi hàm Euler
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math31
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

long long Euler(ll n){
	ll res=n;
	for(ll i=2; i*i<=n; i++){
		if(n%i==0){
			res=res-res/i;
				while(n%i==0){
					n/=i;
				}
			}
		}
	if(n!=1) res=res-res/n;
	return res;
}

int main(){
	ll n; cin>>n;
	cout<<Euler(n);
}
