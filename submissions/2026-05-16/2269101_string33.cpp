// Problem: [Xâu Ký Tự]. Bài 33. Số đẹp 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string33
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPalindrome(string s){
	int n = s.size();
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]) return false;
	}
	return true;
}

bool isPerfect(string s){
	if(s.find('6') == string::npos) return false;
	if(!isPalindrome(s)) return false;
	return true;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isPerfect(s)) cout<<"YES";
	else cout<<"NO";
}
