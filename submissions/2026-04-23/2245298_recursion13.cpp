// Problem: [Đệ Quy]. Bài 13. Tìm tổng chữ số của N
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion13
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll sum(ll n){
	if(n == 0) return 0;
	return (n % 10) + sum(n / 10);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<sum(n);
}
