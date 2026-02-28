// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 15. The 2014 ACM-ICPC Asia Jakarta Regional Contest
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk15
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
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a.begin(),a.end());
	int cnt=1;
	for(int i=1; i<n; i++){
		if((a[i]-a[i-1]) > k){
			cnt++;
		}
	}
	cout<<cnt;
}
