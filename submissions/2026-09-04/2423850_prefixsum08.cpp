// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 8. Prefix prefix
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum08
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
    
	int n, m, k; cin >> n >> m >> k;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	vector<vector<int>> vv;
	
	for(int i = 0; i < m; i++){
		int l, r, d; cin >> l >> r >> d;
		vv.push_back({l, r, d});
	}
	
	vector<int> cnt_q(m + 2, 0);
	for(int i = 0; i < k; i++){
		int x, y; cin >> x >> y;
		x--; y--;
		cnt_q[x] += 1;
		cnt_q[y + 1] -= 1;
	}
	
	vector<ll> cnt(m + 2, 0);
	
	cnt[0] = cnt_q[0];
	for(int i = 1; i < m; i++){
		cnt[i] = cnt[i - 1] + cnt_q[i];
		
	}
	
	vector<ll> diff(n + 2, 0);
	for(int i = 0; i < m; i++){
		int l = vv[i][0];
		int r = vv[i][1];
		int d = vv[i][2];
		
		ll dis = cnt[i] * d;
		
		diff[l - 1] += dis;
		diff[r] -= dis;
	}
	
	vector<ll> res(n, 0);
	res[0] = diff[0];
	for(int i = 1; i < n; i++){
		res[i] = res[i - 1] + diff[i];
	}
	
	for(int i = 0; i < n; i++){
		cout<< v[i] + res[i] << " ";
	}
	
}
