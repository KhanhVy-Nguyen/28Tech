// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 50. Số cặp chẵn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic50
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
	int res=0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if((a[i]+a[j])%2==0) res++;
		}
	}
	cout<<res;
}
