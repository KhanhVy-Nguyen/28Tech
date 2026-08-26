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
	int a[n + 1][m + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	int q; cin >> q;
	while(q--){
		int cnt = 0;
		int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
		for(int i = x1; i <= x2; i++){
			for(int j = y1; j <= y2; j++){
				if(a[i][j] == 1) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
