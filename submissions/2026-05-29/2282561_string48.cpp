// Problem: [Xâu Ký Tự]. Bài 48. Số may mắn 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string48
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isLuck(string s){
	ll res = 0;
	
	for(auto x : s){
		res = res + (x - '0');
	}
	if(res == 0) return false;
	return res % 9 == 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	cout<<(isLuck(s)? "YES" : "NO");
}
