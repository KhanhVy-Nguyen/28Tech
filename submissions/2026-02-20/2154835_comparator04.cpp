// Problem: [Comparator Lower_bound Upper_bound]. Bài 4. Pair sort
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator04
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//anh Binh viet

int main(){
	int n; cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		v.push_back({x,y});
	}
	
	sort(v.begin(), v.end(), [](const auto& a, const auto& b){
		int distance_a = a.first * a.first + a.second * a.second;
		int distance_b = b.first * b.first + b.second * b.second;
		
		return std::tie(distance_a, a.first, a.second) < std::tie(distance_b, b.first, b.second);
	});
	
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
	}
