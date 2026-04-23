// Problem: [Đệ Quy]. Bài 11. Thập phân sang nhị phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion11
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll ToBinary(ll n){
	
	if(n == 0) return 0;
	return (n % 2) + 10 * ToBinary(n / 2);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<ToBinary(n);
}
