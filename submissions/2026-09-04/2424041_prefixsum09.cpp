// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 9. Hàng cây
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum09
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
    
	int n, m; cin >> n >> m;
	vector<int> v(n + 1, 0);
	
	vector<int> diff(n + 2, 0);
	
	while(m--){
		int pos, rad; cin >> pos >> rad;
		
		int l = (pos - rad <= 0)? 1 : (pos - rad);
		int r = (pos + rad > n)? n : (pos + rad);
		
		diff[l] += 1;
		diff[r + 1] -= 1;
	}
	
	int cnt = 0;
	vector<int> prefix(n + 1, 0);
	for(int i = 1; i <= n; i++){
		prefix[i] = prefix[i - 1] + diff[i];
		if(prefix[i] >= 1) cnt++;
	}
	
	cout << cnt ;
}
