// Problem: [Comparator Lower_bound Upper_bound]. Bài 13. Lower
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator13
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
		int m = (l+r) / 2;
		if(a[m]<=x){
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
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int p = lastPos(a, 0, n-1, x);
	
	if(p==-1) cout<<"NOT FOUND";
	else cout<<a[p];
}
