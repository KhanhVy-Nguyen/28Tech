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
		for(int j = 1; j <= m; j++){
			cin >> matrix[i][j];
		}
	}
	
	vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i][j];
		}
	}
	
	int cnt = 0;
	int target_sum = k * k;
	for(int i = k; i <= n; i++){
		for(int j = k; j <= m; j++){
			int cur_sum = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
			
			if(cur_sum == target_sum) cnt++;
			
		}
	}
	
	cout << cnt ;
}
