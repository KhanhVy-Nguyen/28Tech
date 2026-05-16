// Problem: [Xâu Ký Tự]. Bài 34. Số đẹp 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string34
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPerfect(string s){
	int n = s.size();
	if(s[0] > s[n - 1]){
		for(int i = 1 ; i < n; i++){
			if(s[i - 1] < s[i]){
				return false;
			}
		}
	}
	else if(s[0] < s[n - 1]){
		for(int i = 1; i < n; i++){
			if(s[i - 1] > s[i]){
				return false;
			}
		}
	}
	else{
		for(int i = 1; i < n; i++){
			if(s[i - 1] != s[i]){
				return false;
			}
		}
	}
	
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isPerfect(s)) cout<<"YES";
	else cout<<"NO";
}
