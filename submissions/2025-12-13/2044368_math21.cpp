// Problem: [Lý Thuyết Số – Toán Học]. Bài 21. Số chính phương trong đoạn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math21
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
	for(ll i=a; i<=b; i++){
		if(floor(sqrt(i)) * floor(sqrt(i))==i) cout<<i<<" ";
	}
}
