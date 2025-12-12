// Problem: [Lý Thuyết Số – Toán Học]. Bài 22. Số chính phương 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math22
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ll a,b; cin>>a>>b;
	int cnt=0;
	for(ll i=ceil(sqrt(a)); i<=sqrt(b); i++){
		cnt++;
	}
	cout<<cnt;
}
