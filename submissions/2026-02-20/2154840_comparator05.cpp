// Problem: [Comparator Lower_bound Upper_bound]. Bài 5. Pair sort 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator05
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
	vector<tuple<int,int,int>> v;
	for(int i=0; i<n; i++){
		int x,y,z; cin>>x>>y>>z;
		v.push_back({x,y,z});
	}
	
	sort(v.begin(), v.end());
	
	for(auto value:v){
		auto[x,y,z] = value;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
}
