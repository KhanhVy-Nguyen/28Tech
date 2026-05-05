// Problem: [Mảng 2 Chiều]. Bài 15. Xoắn ốc Fibonacci
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll f[1000];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	int a[n][n];
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92; i++){
		f[i]=f[i-1]+f[i-2];
	}
	
	
	int c1 = 0, h1 = 0, c2 = n - 1, h2 = n - 1;
	int cnt = 0;
	while(c1 <= c2 && h1 <= h2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = cnt;
			cnt++;
		}
		h1++;
		
		for(int i = h1; i <= h2; i++){
			a[i][c2] = cnt;
			cnt++;
		}
		c2--;
		
		for(int i = c2; i >= c1; i--){
			a[h2][i] = cnt;
			cnt++;
		}
		h2--;
		
		for(int i = h2; i >= h1; i--){
			a[i][c1] = cnt;
			cnt++;
		}
		c1++;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<f[a[i][j]]<<" ";
		}
		cout<<endl;
	}
	
}
