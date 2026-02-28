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

//key

int main(){
	int n,k; cin>>n>>k;
	vector<int> v(n);
	for(auto& x:v){
		cin>>x;
	}
	
	sort(v.begin(),v.end());
	int cnt=1;
	for(int i=1; i<n; i++){
		if((v[i]-v[i-1]) <= k){
			continue;
		}
		else{
			cnt++;
		}
	}
	cout<<cnt;
}
