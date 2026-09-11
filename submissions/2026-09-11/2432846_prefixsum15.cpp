// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 15. Đoạn con có tổng chia hết cho K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n, k; cin >> n >> k;
	vector<int> v;
	for(int i  =0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	map<int, int> prefix_cnt;
	prefix_cnt[0] = 1;
	
	ll cnt = 0;
	ll cur_sum = 0;
	
	for(int i = 0; i < n; i++){
		cur_sum += v[i];
		ll target = ((cur_sum % k) + k) % k;
		
		if(prefix_cnt.find(target) != prefix_cnt.end()){
			cnt += prefix_cnt[target];
		}
		
		prefix_cnt[target]++;
	}
	
	cout << cnt ;
}
