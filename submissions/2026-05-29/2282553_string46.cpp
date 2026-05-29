// Problem: [Xâu Ký Tự]. Bài 46. Tìm số dư
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string46
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	ll res = 0;
	for(int i = 0 ; i < s.size(); i++){
		res = res * 10 % 4 + (s[i] - '0') % 4;
		res %= 4;
	}
	if(res == 0){
		cout<<4;
	}
	else{
		cout<<0;
	}
}
