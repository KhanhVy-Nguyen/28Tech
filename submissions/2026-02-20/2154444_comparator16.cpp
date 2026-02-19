// Problem: [Comparator Lower_bound Upper_bound]. Bài 16. Lớn hơn hoặc bằng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator16
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
	
	sort(b,b+m);
	
	for(int x:a){
		int *p = lower_bound(b,b+m,x);
		cout<< (b+m)-p <<" ";
	}
	
	//not b - p + m because p>=b

}
