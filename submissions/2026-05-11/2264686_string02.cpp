// Problem: [Xâu Ký Tự]. Bài 2. In hoa, in thường
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string02
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
		cout<<(char)toupper(x);
	}
	cout<<"\n";
	
	for(auto x : s){
		cout<<(char)tolower(x);
	}
	cout<<"\n";
	
}
