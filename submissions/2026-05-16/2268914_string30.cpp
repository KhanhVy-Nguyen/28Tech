// Problem: [Xâu Ký Tự]. Bài 30. Ghép xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string30
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

string dezero(string s){
	int i = 0;
	while(i < (int)s.size() - 1 && s[i] == '0') i++;
	return s.substr(i);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	for(auto &x : s){
		if(!isdigit(x)){
			x = ' ';
		}
	}
	
	stringstream ss(s);
	vector<string> v;
	string w;
	while(ss >> w){
		w = dezero(w);
		v.push_back(w);
	}
	
	sort(v.begin(), v.end());
	
	for(int i = v.size() - 1; i >= 0; i--){
		cout<<v[i];
	}
}
