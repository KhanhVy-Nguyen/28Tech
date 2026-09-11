// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 14. Đoạn con có tổng bằng S
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n, s; cin >> n >> s;
	vector<ll> v;
	for(int i = 0; i < n; i++){
		ll a; cin >> a;
		v.push_back(a);
	}
	
	unordered_map<ll, ll> prefix_counts;
	prefix_counts[0] = 1;
	
	ll cur_sum = 0;
	ll cnt = 0;
	
	for(int i = 0; i < n; i++){
		cur_sum += v[i];
		ll target = cur_sum - s;
		
		if(prefix_counts.find(target) != prefix_counts.end()){
			cnt += prefix_counts[target];
		}
		
		prefix_counts[cur_sum]++;
	}
	cout<<cnt;
}
