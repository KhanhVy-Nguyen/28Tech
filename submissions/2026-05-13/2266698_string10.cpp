// Problem: [Xâu Ký Tự]. Bài 10. Liệt kê từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string10
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
	for(auto x : s){
		if(!isalpha(x)){
			x = ' ';
		}
	}
	
	set<string> s1;
	vector<string> s2;
	stringstream ss(s);
	string w;
	while(ss >> w){
		s1.insert(w);
		auto it = find(s2.begin(), s2.end(), w);
		if(it == s2.end()){
			s2.push_back(w);
		}
	}
	
	for(auto x : s1) cout<<x<<" ";
	cout<<"\n";
	for(auto x : s2) cout<<x<<" "; 
}
