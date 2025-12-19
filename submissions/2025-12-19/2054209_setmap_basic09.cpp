// Problem: [Set & Map Cơ Bản]. Bài 9. Đếm điểm
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic09
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
	map<pair<int,int>, int> mp;
	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		mp[{x,y}]++;
	}
	for(auto x:mp){
		cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<"\n";
	}
}
