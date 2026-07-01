// Problem: [Xâu Ký Tự]. Bài 56. Số La Mã
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string56
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

unordered_map<char, int> mp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
	
void toDecimal(string s){
	ll res = 0;
	int n = s.size();
	
	for(int i = 0; i < n; i++){
		if(i + 1 < n && mp[s[i]] < mp[s[i + 1]]){
			res -= mp[s[i]];
		}
		else{
			res += mp[s[i]];
		}
	}
	
	cout<<res<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		toDecimal(s);
	}
}
