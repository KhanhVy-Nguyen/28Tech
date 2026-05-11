// Problem: [Xâu Ký Tự Cơ Bản]. Bài 35. Sunday league
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic35
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
    
	
	string s; 
	map<string, int> mp;
	vector<pair<string, int>> v;
	while(getline(cin, s)){
		int pos = s.find(" - ");
		
		string t1 = s.substr(0,pos);
		string t2 = s.substr(pos + 3);
		
		mp[t1]++;
		mp[t2]++;
	}
	
	for(auto x : mp){
		v.push_back(x);
	}
	
	sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b){
		if(a.second != b.second){
			return a.second > b.second;
		}
		return a.first < b.first;
	});
	
	for(auto x : v){
		cout<<x.first<<" "<<x.second<<"\n";
	}
}
