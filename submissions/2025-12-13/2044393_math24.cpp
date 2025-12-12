// Problem: [Lý Thuyết Số – Toán Học]. Bài 24. Đếm ước
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math24
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
	ll cnt=0;
	for(ll i=1; i<=sqrt(n); i++){
		if(n%i==0){
			cnt++;
			if(i!=n/i){
				cnt++;
			}
		}
		
	}
	cout<<cnt;
}
