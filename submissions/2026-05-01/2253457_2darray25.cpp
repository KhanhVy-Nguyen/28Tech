// Problem: [Mảng 2 Chiều]. Bài 25. Diện tích
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int n,m, a[505][505];
int visited[505][505];
int cnt;


int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void input(){
	cin>>n>>m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin>>a[i][j];
		}
	}
}

void ar(int i, int j){
	cnt++;
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
	
	int res = 0;
	
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m ;j++){
			cnt = 0;
			if(a[i][j] == 1 && visited[i][j] == 0){
				ar(i, j);
			}
			res = max(res, cnt);
		}
	}
	
	cout<<res;
}
