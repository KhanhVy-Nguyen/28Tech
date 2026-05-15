// Problem: [Xâu Ký Tự]. Bài 15. Kiểm tra xâu con
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string15
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
    
	string t; getline(cin, t);
	string s; cin>>s;
	
	if(t.find(s) != string::npos){
		cout<<"YES";
	}
	else cout<<"NO";
}
