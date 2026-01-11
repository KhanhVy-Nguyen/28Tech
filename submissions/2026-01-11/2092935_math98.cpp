// Problem: [Lý Thuyết Số – Toán Học]. Bài 98. Sàng tổng ước
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math98
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;
ll res[1000001];


int main(){
	int n ; cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j+=i){
			res[j]+=i;
		}
	}
	for(int i=1; i<=n; i++){
		cout<<res[i]<<" ";
	}
	return 0;
}
