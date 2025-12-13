// Problem: [Lý Thuyết Số – Toán Học]. Bài 25. Số có lượng ước là số lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool square(ll n) {
    int x = sqrt(n);
    return x * x == n;
}

int main(){
	ll n; cin>>n;
	if(square(n)) cout<<"YES";
	else cout<<"NO";
	
}
