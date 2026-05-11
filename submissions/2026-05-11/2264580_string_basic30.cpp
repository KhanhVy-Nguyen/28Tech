// Problem: [Xâu Ký Tự Cơ Bản]. Bài 30. Permutation
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic30
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    multiset<char> msn, msm;
    
	string n, m; cin>>n>>m;
	for(auto x : n) msn.insert(x);
	for(auto x : m) msm.insert(x);
	
	for(auto x : n){
		if(msn.count(x) != msm.count(x)){
			cout<<"29tech";
			return 0;
		}
	}
	cout<<"28tech";
}
