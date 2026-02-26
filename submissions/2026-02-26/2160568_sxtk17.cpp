// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 17. Cặp số có tổng bằng K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getLastEqual(int a[], int l, int r, int x){
	int index=-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			index=m;
			l=m+1;
		}
		else if(a[m]<x) l=m+1;
		else r=m-1;
	}
	return index;
}

int getFirstEqual(int a[], int l, int r, int x){
	int index =-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			index = m;
			r=m-1;
		}
		else if(a[m]<x) l=m+1;
		else r=m-1;
	}
	return index;
}


int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a,a+n);
	
	ll cnt=0;
	for(int i=0; i<n; i++){
		int target = k-a[i];
		int first = getFirstEqual(a,i+1,n-1,target);
		
		if(first != -1){
			int last = getLastEqual(a,i+1,n-1,target);
			cnt += last - first + 1;
		}
		
	}
	cout<<cnt;
}
