// Problem: [Mảng 2 Chiều]. Bài 13. Nhân 2 ma trận
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray13
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
    
	int n,m,p; cin >> n >> m >> p;
	int a[n][m], b[m][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin>>b[i][j];
		}
	}
	
	ll c[n][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			c[i][j] = 0;
			for(int k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			cout << c[i][j] <<" ";
		}
		cout<<"\n";
	}
}
