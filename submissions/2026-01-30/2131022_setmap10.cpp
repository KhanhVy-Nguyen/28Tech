// Problem: [Set & Map]. Bài 10. Intersection
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap10
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m; cin>>n>>m;
	vector<int> v1;
	set<int> v2;
	set<int> res;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v1.push_back(value);
	}
	for(int i=0; i<m; i++){
		int b; cin>>b;
		v2.insert(b);
	}
	for(int x:v1){
		if(v2.count(x) && !res.count(x)){
			cout<<x<<" ";
			res.insert(x);
		}
	}
}
