// Problem: [Mảng 2 Chiều]. Bài 27. Maximum path sum 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray27
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int f[105][105];
int a[105][105];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin>>a[i][j];
		}
	}
	
	
	for(int j = 1; j <= n; j++){
		for(int i = 1; i <= n; i++){
			f[i][j] = max({f[i - 1][j - 1], f[i][j - 1], f[i + 1][j - 1]}) + a[i][j];
			
		}
		
	}
	
	int res = INT_MIN;
	for(int i = 1; i <= n; i++){
		res = max(res, f[i][n]);
	}
	cout<<res;
}
