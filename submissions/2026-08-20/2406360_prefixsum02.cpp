// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 2. Truy vấn tổng tĩnh
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum02
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
    
	int n, q; cin >>n >>q;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	vector<ll> pref (n + 1, 0);
	
	for(int i = 1; i <= n; i++){
		pref[i] = pref[i - 1] + v[i - 1];
	}
	
	while(q--){
		int l, r; cin >> l >>r;
		cout<< pref[r + 1] - pref[l] << endl;
	}
}
