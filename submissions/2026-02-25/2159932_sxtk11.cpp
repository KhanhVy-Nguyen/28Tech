// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 11. Trộn 2 dãy
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk11
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

void mergeSort(int a[], int n, int b[], int m){
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else{
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<b[j]<<" ";
		j++;
	}
}

int main(){
	int n,m; cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			cout<<'b'<<i+1<<" ";
			i++;
		}
		else{
			cout<<'c'<<j+1<<" ";
			j++;
		}
	}
	while(i<n){
		cout<<'b'<<i+1<<" ";
		i++;
	}
	while(j<m){
		cout<<'c'<<j+1<<" ";
		j++;
	}
}
