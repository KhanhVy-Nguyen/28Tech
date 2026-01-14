// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 32. Xoay trái
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic32
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,k; cin>>n>>k; k--;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=k%n+1; i<n; i++) cout<<a[i]<<" ";
	for(int i=0; i<=k%n; i++) cout<<a[i]<<" ";
}
