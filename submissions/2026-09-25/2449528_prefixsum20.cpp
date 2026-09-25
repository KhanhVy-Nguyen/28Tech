// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 20. Mảnh đất tốt
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum20
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
    
	int n, m, k; cin >> n >> m >> k;
	vector<vector<int>> matrix(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <=m ;j++){
			cin >> matrix[i][j];
		}
	}
	
	ll cnt = 0;
	vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m ; j++){
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i][j];
		}
	}
	
	
	ll cur_val = 0;
	for(int i = k; i <= n; i++){
		for(int j = k; j <= m ;j++){
			cur_val = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
			
		}
	}
	
	
}
