// Problem: [Xâu Ký Tự Cơ Bản]. Bài 34. Tần suất của tên người
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic34
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
    
	
	map<string, int> mark;
	string s;
	set<string> se;
	while(getline(cin, s)){
		mark[s]++;
		se.insert(s);
	}
	
	for(auto x : se){
		cout<<x<<" "<<mark[x]<<"\n";
	}
}
