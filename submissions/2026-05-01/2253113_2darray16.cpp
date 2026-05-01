// Problem: [Mảng 2 Chiều]. Bài 16. Đếm đảo 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray16
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int n,m, a[105][105];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void input(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
}

void ar(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 4; k++){
		int x = i + dx[k];
		int y = j + dy[k];
		
		if(x >=0 && x < n && y >=0 && y < m && a[x][y] == 1){
			ar(x, y);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	input();
	
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == 1){
				cnt++;
				ar(i,j);
			}
		}
	}
	
	cout<<cnt;
}
