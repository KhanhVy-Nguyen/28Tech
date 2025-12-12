// Problem: [Lý Thuyết Số – Toán Học]. Bài 23. Tổng ước
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math23
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ll n; cin>>n;
	ll total=0;
	for(ll i=1; i<=n; i++){
		if(n%i==0){
			total+=i;
		}
	}
	cout<<total;
}
