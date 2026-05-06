// Problem: [Mảng 2 Chiều]. Bài 21. Đường đi của quân Mã
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray21
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

// k

int n;
int a[100][100];
bool visited[100][100];
int dx[8] = {-2, -1, -2, -1, 1, 2, 2, 1};
int dy[8] = {-1, -2, 1, 2, -2, -1, 1, 2};

void dfs(int x, int y){
	visited[x][y]=  true;
	for(int k=0; k<8; k++){
		int nx = x + dx[k];
		int ny = y + dy[k];
		
		if(nx >= 0 && ny >= 0 && nx < n && ny < n && a[nx][ny] == 1 && !visited[nx][ny]){
			dfs(nx, ny);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	 cin>>n;
	int s,t,u,v; cin>>s>>t>>u>>v;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			visited[i][j] = false;
		}
	}
	s--; t--; u--; v--;
	
	dfs(u,v);
	if(visited[s][t]){
		cout<<"YES";
	}
	else cout<<"NO";
	
	
}
