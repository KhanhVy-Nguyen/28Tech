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

int res(int n){
	int total=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			total+=i;
			if(n/i!=i){
				total+=n/i;
			}
		}
	}
	return total;
}

int main(){
	int n ; cin>>n;
	for(int i=1; i<=n; i++){
		cout<<res(i)<<" ";
	}
	return 0;
}
