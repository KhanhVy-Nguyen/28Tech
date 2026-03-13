// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 24. Biểu thức lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk24
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
	vector<int> v;
	int cnt_plus=0;
	ll res=0;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		v.push_back(a);
	}
	
	
	while(cnt_plus<=k){
		auto max = max_element(v.begin(), v.end());
		res+=*max;
		v.erase(max);
		cnt_plus++;
	}
	for(int x:v){
		res-=x;
	}
	cout<<res;
}
