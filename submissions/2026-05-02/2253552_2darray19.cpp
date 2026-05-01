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
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0 && j == 0){
				f[i][j] = a[i][j];
			}
			else if(i == 0){
				f[i][j] = a[i][j - 1] + a[i][j];
			}
			else if(j == 0){
				f[i][j] = a[i - 1][j] + a[i][j];
			}
			else{
				f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
			}
			
		}
	}
	cout<<f[n - 1][m - 1];
}
