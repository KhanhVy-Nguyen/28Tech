// Problem: [Xâu Ký Tự Cơ Bản]. Bài 26. Số hợp lệ 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool check(string s){
	if(s[0] % 2 != s[s.size()] % 2){
		return false;
	}
	
	for(int i = 1; i < s.size(); i++){
		if(abs(s[i] - s[i - 1]) == 3){
			return false;
		}
		
		if((s[i] == '2' && s[i - 1] == '8') || (s[i] == '8' && s[i - 1] == '2')){
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
		if(check(s)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
