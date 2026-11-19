// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 43. Mảng con chia hết cho K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk43
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin >> n;
	ll sum = 0;
	map<ll, ll> mp;
	mp[0] = 1;
	ll res = 0;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		sum += a;
		
		ll rem = ((sum % n) + n) % n;
		
		res += mp[rem];
		mp[rem]++;
	}
	cout << res;
	
}