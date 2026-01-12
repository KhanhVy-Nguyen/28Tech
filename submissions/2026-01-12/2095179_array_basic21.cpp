// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 21. Chèn mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic21
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,x,k; cin>>n>>x>>k; k--;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=n-1; i>=k; i--){
		a[i+1]=a[i];
	}
	a[k]=x;
	n++;
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
}
