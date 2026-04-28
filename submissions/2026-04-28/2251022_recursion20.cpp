// Problem: [Đệ Quy]. Bài 20. Đếm số thao tác
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion20
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int solve(ll n){
	if(n == 1) return 0;
	
	int x = INT_MAX, y = INT_MAX, z = INT_MAX;
	if(n % 2 == 0){
		x = 1 + solve(n / 2);
	}
	if(n % 3 == 0){
		y = 1 + solve(n / 3);
	}
	if(n > 1){
		z = 1 + solve(n - 1);
	}
	
	return min({x,y,z});
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<solve(n);
}
