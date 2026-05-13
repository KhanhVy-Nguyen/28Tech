// Problem: [Xâu Ký Tự]. Bài 13. Tần suất từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string13
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
	for(auto &x : s){
		if(!isalpha(x) && !isdigit(x)){
			x = ' ';
		}
	}
	
	map<string, int> mp;
	set<string> se;
	vector<string> v;
	
	stringstream ss(s);
	string w;
	while(ss >> w){
		mp[w]++;
		if(se.find(w) == se.end()){
			v.push_back(w);
			se.insert(w);
		}
	}
	
	for(auto x : se) cout<<x<<" "<<mp[x]<<"\n";
	cout<<"\n";
	for(auto x : v) cout<<x<<" "<<mp[x]<<"\n";
}
