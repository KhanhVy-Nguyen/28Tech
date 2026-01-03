// Problem: [Lý Thuyết Số – Toán Học]. Bài 35. UCLN & BCNN
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math35
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
	ll GCD=gcd(a,b);
	ll LCM=lcm(a,b);
	cout<<GCD<<" "<<LCM;
	return 0;
}
