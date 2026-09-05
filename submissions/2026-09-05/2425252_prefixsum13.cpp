// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 13. Max window
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum13
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
    
	int n, k; cin >> n >> k;
	k--;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	vector<ll> prefix(n + 1, 0);
	prefix[0] = v[0];
	for(int i = 1; i < n; i++){
		prefix[i] = prefix[i - 1] + v[i];
	}
	
	ll max_sum = 0, cur_sum = prefix[k];
	max_sum = max(max_sum, cur_sum);
	
	for(int i = k; i < n; i++){
		cur_sum = prefix[i + 1] - prefix[i - k];
		max_sum = max(max_sum, cur_sum);
	}
	
	cout << max_sum;
}
