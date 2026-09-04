// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 11. Xây dựng mảng hiệu 2D
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum11
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
    
	int n, m ; cin >> n >> m;
	vector<vector<int>> vv(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> vv[i][j];
		}
	}
	
	
	
	vector<vector<int>> diff(n + 1, vector<int>(m + 1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			diff[i][j] = vv[i][j] - vv[i-1][j] - vv[i][j-1] + vv[i-1][j-1];
			cout<<diff[i][j] << " ";

		}
		cout<<endl;
	}
}
