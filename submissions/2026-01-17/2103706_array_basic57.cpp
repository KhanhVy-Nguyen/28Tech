// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 57. Cặp số Fibonacci
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic57
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int f[1000];
bool check_fi(int n){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92; i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0; i<=92; i++){
		if(f[i]==n){
			return true;
		}
	}
	return false;
}

int main(){
	int n; cin>>n;
	int cnt=0;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(check_fi(a[i]+a[j])) cnt++;
		}
	}	
	cout<<cnt;
}
