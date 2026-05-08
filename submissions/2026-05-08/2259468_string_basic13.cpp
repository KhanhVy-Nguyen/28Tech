// Problem: [Xâu Ký Tự Cơ Bản]. Bài 13. Liệt kê từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic13
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
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?'){
			s[i] = ' ';
		}
	}
	
	stringstream ss(s);
	string word;
	while(ss >> word){
		cout<<word<<" ";
	}
	
}
