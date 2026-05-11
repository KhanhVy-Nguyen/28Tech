// Problem: [Xâu Ký Tự]. Bài 3. Tần suất ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string03
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
	vector<char> v;

	for(char x : s){
		mp[x]++;
		auto it = find(v.begin(), v.end(), x);
		if(it == v.end()){
			v.push_back(x);
		}
	}
	
	
	for(auto x : mp){
		cout<<x.first<<" "<<x.second<<"\n";
	}
	
	cout<<"\n";
	
	for(auto x : v){
		cout<<x<<" "<<mp[x]<<"\n";
	}
	
}
