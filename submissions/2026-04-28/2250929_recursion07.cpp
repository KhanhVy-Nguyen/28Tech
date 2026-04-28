// Problem: [Đệ Quy]. Bài 7. Tổ hợp
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

ll nCk(ll n, ll k){
	if(k == 0 || k == n || n == 0) return 1;
	return nCk(n - 1, k - 1) + nCk(n - 1, k);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n,k; cin>>n>>k;
	cout<<nCk(n,k);
}
