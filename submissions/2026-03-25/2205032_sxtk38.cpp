// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 38. Liên hoan phim
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk38
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
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int a,b; cin>>a>>b;
		v.push_back({a,b});
	}
	
	sort(v.begin(), v.end(), [](auto a, auto b){
		return a.second < b.second;
	});
	
	int cnt = 1;
	int current = v[0].second;
	for(int i=1; i<n; i++){
		if(v[i].first >= current){
			cnt++;
			current = v[i].second;
		}
	}
	cout<<cnt;
}
