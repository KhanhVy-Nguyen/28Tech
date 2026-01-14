// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 38. Tổng dãy số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic38
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
	
	int tt2=0, tt3=0, tt4=0;
	for(int i=1; i<n; i++){
		tt2=a[i-1]+a[i];
		cout<<tt2<<" ";
	}
	cout<<endl;
	
	for(int i=2; i<n; i++){
		tt3=a[i-2]+a[i-1]+a[i];
		cout<<tt3<<" ";
	}
	cout<<endl;
	
	for(int i=3; i<n; i++){
		tt4=a[i-2]+a[i-1]+a[i-3]+a[i];
		cout<<tt4<<" ";
	}
	cout<<endl;
	
}
