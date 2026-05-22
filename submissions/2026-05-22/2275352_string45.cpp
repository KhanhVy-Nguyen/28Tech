// Problem: [Xâu Ký Tự]. Bài 45. Chữ số cuối cùng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string45
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
	int n = s.size();
	int last_digit = s[n - 1] - '0';
	
	if(last_digit == 0) cout<<1;
	else if(last_digit == 1) cout<<8;
	else if(last_digit == 2) cout<<4;
	else if(last_digit == 3) cout<<2;
	else if(last_digit == 4) cout<<6;
}
