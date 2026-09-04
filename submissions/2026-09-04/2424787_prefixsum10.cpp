// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 10. Đếm số lượt truy vấn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum10
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
    
	int n, q; cin >> n >> q;
	vector<int> v(n + 1, 0);
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		
	}
	
	vector<int> diff(n, 0);
	while(q--){
		int l, r; cin >> l >> r;
		
		diff[l] += 1;
		diff[r + 1] -= 1;
	}
	
	
	vector<int> prefix(n, 0);
	prefix[0] = diff[0];
	for(int i = 1; i < n; i++){
		prefix[i] = prefix[i - 1] + diff[i];
	}
	
	for(int x : prefix) cout << x << " ";
}
