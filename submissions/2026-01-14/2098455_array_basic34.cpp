// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 34. Unique array
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic34
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
	for(int i=0; i<n; i++) cin>>a[i];
	
	cout<<a[0]<<" ";
	for(int i=1; i<n; i++){
		if(a[i-1]!=a[i]){
			cout<<a[i]<<" ";
		}
	}
}
