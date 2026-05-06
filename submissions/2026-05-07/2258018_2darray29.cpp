// Problem: [Mảng 2 Chiều]. Bài 29. Đường đi của quân Tịnh
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray29
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int a[1000][1000];
int n;
bool visited[1000][1000];

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {1, -1, -1, 1};

int cnt = 0;

void dfs(int x, int y){
	cnt++;
	visited[x][y] = true;
	for(int k=0; k<n; k++){
		int nx = x + dx[k];
		int ny = y + dy[k];
		
		if(nx >= 0 && nx < n && ny >= 0 && ny < n && a[nx][ny] == 0 && !visited[nx][ny]){
			dfs(nx, ny);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
	int s,t; cin>>s>>t;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
			visited[i][j] = false;
		}
	}
	s--; t--;
	
	dfs(s, t);
	cout<<cnt;
	
	
}
