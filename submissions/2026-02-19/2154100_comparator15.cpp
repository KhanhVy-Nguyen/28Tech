// Problem: [Comparator Lower_bound Upper_bound]. Bài 15. Lớn hơn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int firstPos(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]>x){
			res=m;
			r=m-1;
		}
		else l=m+1;
	}
	return res;
}

int main(){
	int n,m; cin>>n>>m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	
	sort(b, b+m);
	
	for(int x:a){
		int p = firstPos(b, 0, m-1, x);
		if(p==-1) cout<<0<<" ";
		else{
			cout<<m-p<<" ";
		}
	}
}
