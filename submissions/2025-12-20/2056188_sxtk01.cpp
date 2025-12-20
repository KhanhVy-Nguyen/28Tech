// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 1. Các số khác nhau trong mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk01
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	int a[n];
	int cnt=1;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1; i<n; i++){
		if(a[i-1]!=a[i]) cnt++;
	}
	cout<<cnt;
}
