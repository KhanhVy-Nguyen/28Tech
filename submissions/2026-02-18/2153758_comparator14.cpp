// Problem: [Comparator Lower_bound Upper_bound]. Bài 14. Nhỏ hơn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int lastPos(int a[], int l, int r, int x){
	int res= -1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<x){
			res=m;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return res;
}
int main(){
	int n,m; cin>>n>>m;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int b[m];
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	sort(b,b+m);
	
	for(int x:a){
		int p = lastPos( b, 0, m-1, x);
		cout<<p+1<<" ";
	}
	
}
