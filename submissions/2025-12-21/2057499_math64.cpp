// Problem: [Lý Thuyết Số – Toán Học]. Bài 64. Số Fibonacci 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math64
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int f[1000];
bool check_fi(int n){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92; i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0; i<=92; i++){
		if(f[i]==n){
			return true;
		}
	}
	return false;
}

int main(){
	ll n; cin>>n;
	if(check_fi(n)) cout<<"YES";
	else cout<<"NO";
}
