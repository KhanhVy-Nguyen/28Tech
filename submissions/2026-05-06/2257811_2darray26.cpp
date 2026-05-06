// Problem: [Mảng 2 Chiều]. Bài 26. Maximum path sum 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll f[105][105];
ll a[105][105];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	int n; cin>>n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin>>a[i][j];
		}
	}
	
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			f[i][j] = max({f[i - 1][j - 1], f[i - 1][j], f[i - 1][j + 1]}) + a[i][j];
			
			
		}
	}
	
	ll res = -1;
	for(int i = 1; i <= n; i++){
		res = max(res, f[n][i]);
	}
	cout<<res;
}
