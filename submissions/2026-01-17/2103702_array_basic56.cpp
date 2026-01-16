// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 56. Cặp số có hiệu bằng k
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic56
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,k; cin>>n>>k;
	int cnt=0;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(abs(a[j]-a[i])==k) cnt++;
		}
	}
	cout<<cnt;
}
