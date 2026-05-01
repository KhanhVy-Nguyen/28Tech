// Problem: [Mảng 2 Chiều]. Bài 31. Tổ hợp chập K của N
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray31
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

ll c[1005][1005];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0; i <= 1000; i++){
    	for(int j = 0; j <= i; j++){
    		if(j == 0 || j == i){
    			c[i][j] = 1;
    		}
    		else{
    			c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
    			c[i][j] %= mod;
    		}
    	}
    }
    
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		cout<<c[n][k]<<"\n";
	}

	
}
