// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 4. Khoảng cách nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk04
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
ll mindis = 1e9+7;



int main(){
	int n; cin>>n; 
	ll a[n];
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1; i<n; i++){
		if(a[i]!=a[i-1]){
			mindis = min(mindis,a[i]-a[i-1]);
		}
	}
	cout<<mindis;
}
