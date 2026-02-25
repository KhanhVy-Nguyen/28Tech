// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 14. Vắt sữa bò
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk14
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
	for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a,a+n, greater<int>());
	
	ll total=0;
	for(int i=0; i<n; i++){
		if(a[i] - i > 0){
			total+=a[i]-i;
		}
	}
	cout<<total;
}
