// Problem: [Comparator Lower_bound Upper_bound]. Bài 18. Đếm số cặp
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	ll res=0;
	for(int i=0; i<n; i++){
		int *p1 = lower_bound(a+i+1, a+n, a[i]+k);
		int *p2 = upper_bound(a+i+1, a+n, a[i]+k);
		res += p2-p1;
	}
	cout<<res;
}
