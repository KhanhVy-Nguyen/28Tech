// Problem: [Xâu Ký Tự]. Bài 55. Xâu đối xứng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string55
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isSymString(string s){
	if(s.size() == 1) return true;
	int cnt = 0;
	for(auto x : s){
		int digit_cnt = count(s.begin(), s.end(), x);
		if(digit_cnt % 2 == 1) cnt++;
		if(cnt > 1) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		cout<<(isSymString(s)? "YES\n" : "NO\n");
	}
}
