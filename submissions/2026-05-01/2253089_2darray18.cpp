// Problem: [Mảng 2 Chiều]. Bài 18. Số điểm cực đại
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
	

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,m; cin>>n>>m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	int cnt = 0;
	

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			bool ok = true;
			
			for(int k = 0; k < 8; k++){
				int x = i + dx[k];
				int y = j + dy[k];
				if(x >= 0 && x < n && y >= 0 && y < m && a[x][y] >= a[i][j]){
					ok = false;
					break;
				}
			}
		
			if(ok) cnt++;
		}
	}
	
	cout<<cnt;
}
