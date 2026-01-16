// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 53. Liệt kê vị trí số nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic53
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
	int Min=INT_MAX;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		Min=min(Min,a[i]);
	}
	
	for(int i=0; i<n; i++){
		if(a[i]==Min) cout<<i+1<<" ";
	}
	cout<<"\n";
	for(int i=n-1; i>=0; i--){
		if(a[i]==Min) cout<<i+1<<" ";
	}
}
