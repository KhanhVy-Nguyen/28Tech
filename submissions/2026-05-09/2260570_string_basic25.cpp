// Problem: [Xâu Ký Tự Cơ Bản]. Bài 25. Phone number check
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPhoneNumber(string s){
	if(s[0] != '0'){
		return false;
	}
	
	if(s.size() != 10 && s.size() != 11){
		return false;
	}
	
	for(char c : s){
		if(!isdigit(c)) return false;
	}
	
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(isPhoneNumber(s)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
