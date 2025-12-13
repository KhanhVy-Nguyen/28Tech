// Problem: [Lý Thuyết Số – Toán Học]. Bài 26. Số hoàn hảo
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


bool Prime(ll n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

bool isPerfect(ll n){
	for(int p=1; p<=33; p++){
		if(Prime(p)){
			ll a = pow(2,p) - 1;
			if(Prime(a)){
				ll b = pow(2,p-1);
				if(a*b == n) return true;
			}
		}
	}
	return false;
}

int main(){
	ll n; cin>>n;
	if(isPerfect(n)) cout<<"YES";
	else cout<<"NO";
}
