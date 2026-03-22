// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 31. Dragon
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk31
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,s; cin>>n>>s;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		v.push_back({x,y});
	}
	
	sort(v.begin(), v.end());
	
	bool ok = true;
	for(int i=0; i<n; i++){
		if(s <= v[i].first){
			ok = false;
		}
		else{
			s += v[i].second;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
}
