// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 12. Update operation 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum12
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
	vector<vector<int>> vv(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> vv[i][j];
		}
	}
	
	vector<vector<int>> diff(n + 2, vector<int>(m + 2, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			diff[i][j] = vv[i][j] - vv[i - 1][j] - vv[i][j - 1] + vv[i - 1][j - 1];
		}
	}
	
	
	while(q--){
		int h1, h2, c1, c2, k; cin >> h1 >> h2 >> c1 >> c2 >> k;
		diff[h1][c1] += k;
		diff[h2 + 1][c1] -= k;
		diff[h1][c2 + 1] -= k;
		diff[h2 + 1][c2 + 1] += k;
	}
	
	vector<vector<int>> pref_res(n + 2, vector<int>(m + 2, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			pref_res[i][j] = pref_res[i - 1][j] + pref_res[i][j - 1] - pref_res[i - 1][j - 1] + diff[i][j];
			cout << pref_res[i][j] <<" ";
		}
		cout << endl;
	}
}
