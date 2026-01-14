// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 35. Cộng trừ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic35
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
	int a[n], b[n-1];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n-1; i++) cin>>b[i];
	
	int total=a[0];
	for(int i=1; i<n; i++){
		if(b[i-1]==1){
			total = total + a[i];
		}
		else if(b[i-1]==2){
			total = total - a[i];
		}
	}
	cout<<total;
}
