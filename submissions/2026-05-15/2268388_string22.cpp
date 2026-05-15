// Problem: [Xâu Ký Tự]. Bài 22. Tập từ riêng của 2 xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string22
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
    
	
	string a; getline(cin, a);
	string b; getline(cin, b);
	
	set<string> s1, s2;
	
	stringstream ss1(a);
	stringstream ss2(b);
	
	string w1, w2;
	
	while(ss1 >> w1){
		for(auto &x : w1){
			x = tolower(x);
		}
		s1.insert(w1);
	}
	
	while(ss2 >> w2){
		for(auto &x : w2){
			x = tolower(x);
		}
		s2.insert(w2);
	}
	
	int n = s1.size(), m = s2.size();
	
	for(auto it = s1.begin(); it != s1.end(); it++){
		if(s2.find(*it) == s2.end()){
			cout<<*it<<" ";
		}
	}
	
}
