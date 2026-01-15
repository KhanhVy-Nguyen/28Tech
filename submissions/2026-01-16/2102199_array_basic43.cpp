// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 43. Tổng của mọi dãy con
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic43
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
	int total=0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		total=0;
		for(int j=i; j<n; j++){
			total+=a[j];
			cout<<total<<" ";
		}
	}
}
