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


int main(){
	int n; cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int a,b; cin>>a>>b;
		v.push_back({a,b});
	}
	
	sort(v.begin(), v.end(), [](const auto& x, const auto& y){
		int distance_x = x.first * x.first + x.second * x.second;
		int distance_y = y.first * y.first + y.second * y.second;
		
		if(distance_x != distance_y){
			return distance_x < distance_y;
		}
		if(x.first != y.first){
			return x.first<y.first;
		}
		return x.second<y.second;
	});
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
