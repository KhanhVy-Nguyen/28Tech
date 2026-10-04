// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 24. Công tắc
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum24
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
    
	int n, m, q; cin >> n >> m >> q;
	vector<vector<int>> matrix(n + 2, vector<int>(m + 2, 0));
	
	
	for(int i = 1; i <= q; i++){
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		
		int add = 1;
		if(i % 2 == 0){
			add = -1;
		}
		
		matrix[x1][y1] += add;
		matrix[x1][y2 + 1] -= add;
		matrix[x2 + 1][y1] -= add;
		matrix[x2 + 1][y2 + 1] += add;
	}
	
	int cnt = 0;
	
	vector<vector<int>> prefix(n + 2, vector<int>(m + 2, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + matrix[i][j];
			
			if(prefix[i][j] % 2 != 0) cnt++;
		}
	}
	
	
	cout << cnt;
}
