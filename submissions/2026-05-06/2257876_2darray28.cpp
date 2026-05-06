// Problem: [Mảng 2 Chiều]. Bài 28. Hình vuông lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray28
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll f[105][105];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	
	ll max_sum = INT_MIN;
	for(int i = 1; i <= n - 2; i++){
		for(int j = 1; j <= n - 2; j++){
			ll sum = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
			if(sum > max_sum){
				max_sum = sum;
			}
		}
	}
	cout<<max_sum;
	
}
