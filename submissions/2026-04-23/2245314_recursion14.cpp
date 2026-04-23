// Problem: [Đệ Quy]. Bài 14. Đếm số chữ số của N
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int cnt(ll n){
	if(n < 10) return 1;
	return  1 + cnt(n / 10);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<cnt(n);
}
