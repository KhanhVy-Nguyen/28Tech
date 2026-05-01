// Problem: [Mảng 2 Chiều]. Bài 20. Tìm đường đi
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray20
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int n,m, a[105][105];
int visited[105][105];
int s,t,u,v;

//key

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void input(){
	cin>>n>>m;
	cin>>s>>t>>u>>v;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin>>a[i][j];
		}
	}
}

void ar(int i, int j){
	visited[i][j] = 1;
	for(int k = 0; k < 4; k++){
		int x = i + dx[k];
		int y = j + dy[k];
		
		if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 1 && visited[x][y] == 0){
			ar(x, y);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	input();
	
	
	if(a[s][t] && a[u][v]){
		ar(s,t);
		if(visited[u][v] == 1){
			cout<<"YES";
		}
		else cout<<"NO";
	}
	else{
		cout<<"NO";
	}
	
	
}
