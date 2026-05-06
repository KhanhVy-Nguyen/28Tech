// Problem: [Mảng 2 Chiều]. Bài 33. Chu vi
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray33
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int n, m, a[1001][1001];
bool visited[1000][1000];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int& p){
	int cnt = 0;
	visited[x][y] = true;
	for(int i=0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1){
			cnt++;
			
			if(!visited[nx][ny]){
				dfs(nx, ny, p);
			}
		}
	}
	p = p + 4 - cnt;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin>>n>>m;
	vector<int> v;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == 1 && !visited[i][j]){
				int p = 0;
				dfs(i, j, p);
				v.push_back(p);
			}
		}
	}
	
	for(auto x : v){
		cout<<x<<" ";
	}
}
