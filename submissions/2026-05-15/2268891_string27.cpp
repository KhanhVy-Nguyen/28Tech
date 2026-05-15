// Problem: [Xâu Ký Tự]. Bài 27. Xâu con liên tiếp 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string27
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
	
	string current_string = "";
	string ls = "";
	ls += s[0];
	int max_len = 0;
	for(int i = 1; i < s.size(); i++){
		if(s[i - 1] != s[i]){
			ls += s[i];
			if(max_len < ls.size()){
				max_len = ls.size();
				current_string = ls;
			}
		}
		else{
			ls = s[i];
		}
	}
	
	cout<<current_string;
}
