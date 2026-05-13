// Problem: [Xâu Ký Tự Cơ Bản]. Bài 32. Tần suất của từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic32
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
    
	
	string s; getline(cin, s);
	map<string, int> mp;
	stringstream ss(s);
	string w;
	while(ss >> w){
		mp[w]++;
	}
	
	for(auto x : mp){
		cout<<x.first<<" "<<x.second<<"\n";
	}
}
