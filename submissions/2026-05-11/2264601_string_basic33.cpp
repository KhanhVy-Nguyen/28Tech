// Problem: [Xâu Ký Tự Cơ Bản]. Bài 33. Tần suất của từ 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic33
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
	stringstream ss(s);
	string word;
	map<string, int> mark;
	vector<string> v;
	while(ss >> word){
		auto it = find(v.begin(), v.end(), word);
		if(it == v.end()){
			v.push_back(word);
		}
		mark[word]++;
	}
	
	for(auto x : v){
		cout<<x<<" "<<mark[x]<<"\n";
	}
}
