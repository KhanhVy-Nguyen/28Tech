// Problem: [Set & Map]. Bài 6. Distinct pair
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap06
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	set<pair<int,int>> sam;
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		pair<int,int> p;
		cin>>p.first>>p.second;
		sam.insert(p);
	}
	cout<<sam.size();
}
