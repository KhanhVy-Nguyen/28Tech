// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 12. Khiêu vũ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk12
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m; cin>>n>>m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	
	int cnt=0;
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i] > b[j]){
			cnt++;
			i++;
			j++;
		}
		else{
			i++;
		}
	}
	cout<<cnt;
	
}
