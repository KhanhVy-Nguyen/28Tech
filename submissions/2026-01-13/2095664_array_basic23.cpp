// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 23. Mảng cộng dồn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic23
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
	int b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	b[0]=a[0];
	for(int i=1; i<n; i++){
		b[i]=b[i-1]+a[i];
	}
	for(int x:b) cout<<x<<" ";
	
}
