// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 31. Chèn mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic31
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m,p; cin>>n>>m>>p;
	int a[n], b[m];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m ;i++) cin>>b[i];
	
	for(int i=0; i<p; i++) cout<<a[i]<<" ";
	for(int i=0; i<m; i++) cout<<b[i]<<" ";
	for(int i=p; i<n; i++) cout<<a[i]<<" ";
}
