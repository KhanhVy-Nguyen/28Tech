// Problem: [Xâu Ký Tự]. Bài 12. Sắp xếp từ 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string12
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isSymWord(string s){
	int len = s.size();
	for(int i = 0; i < len / 2; i++){
		if(s[i] != s[len - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	string s; getline(cin, s);
	for(auto &x : s){
		if(!isalpha(x)){
			x = ' ';
		}
	}
	
	vector<string> v;
	set<string> se;
	stringstream ss(s);
	string w;
	while(ss >> w){
		if(isSymWord(w) && se.find(w) == se.end()){
			v.push_back(w);
			se.insert(w);
		}
	}
	
	stable_sort(v.begin(), v.end(), [](string a, string b){
		return a.size() < b.size();
	});
	
	for(auto x : v){
		cout<<x<<" ";
	}
}
