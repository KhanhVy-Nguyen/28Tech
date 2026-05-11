// Problem: [Xâu Ký Tự Cơ Bản]. Bài 31. Tần suất ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic31
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
    
	string s; cin>>s;
	map<char, int> mp;
	set<char> se;
	for(auto x : s){
		mp[x]++;
		se.insert(x);
	}
	
	for(auto x : se){
		cout<<x<<" "<<mp[x]<<"\n";
	}
	
}
