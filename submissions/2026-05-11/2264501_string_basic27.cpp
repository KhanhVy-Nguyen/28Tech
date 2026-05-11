// Problem: [Xâu Ký Tự Cơ Bản]. Bài 27. Kiểm tra email
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic27
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool checkMail(string s){
	int cnt_at = 0;
	for(auto x : s){
		if(x == '@'){
			cnt_at++;
		}
	}
	if(cnt_at != 1) return false;
	
	vector<string> domains = {"@gmail.com", "@28tech.com.vn", "@yahoo.com", "@hotmail.com"};
	bool hasValidDomain = false;
	for(string d : domains){
		if(s.substr(s.length() - d.length()) == d){
			hasValidDomain = true;
			break;
		}
	}
	if(!hasValidDomain) return false;
	
	for(auto c : s){
		if(!isalnum(c) && c != '@' && c != '.' && c != '_'){
			return false;
		}
	}
	
	
	return true;
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(checkMail(s)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
