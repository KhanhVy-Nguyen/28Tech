// Problem: [Mảng 2 Chiều]. Bài 19. Maximum path sum
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray19
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int n,m, a[105][105];
ll f[105][105];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
		}
	}
	cout<<f[n][m];
}
