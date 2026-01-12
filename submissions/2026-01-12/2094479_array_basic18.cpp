// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 18. Liền kề trái dấu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic18
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
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		if(i==0){
			if(1ll*a[i]*a[i+1]<0) cout<<a[i]<<" ";
		}
		else if(i==n-1){
			if(1ll*a[n-1]*a[n-2]<0) cout<<a[i]<<" ";
		}
		else{
			if(1ll*a[i]*a[i+1]<0 || 1ll*a[i]*a[i-1]<0) cout<<a[i]<<" ";
		}
    }
    }
