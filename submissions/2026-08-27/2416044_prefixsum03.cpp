// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 3. Thu hoạch cà rốt
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum03
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
    
	int n, m; cin >> n >>m;
	vector<vector<int>> a(n + 1, vector<int>(m + 1));
	vector<vector<int>> pref(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
		}
	}
	
	int q; cin >> q;
	while(q--){
		int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
		
		int res = pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
		cout << res << endl;
	}
}
