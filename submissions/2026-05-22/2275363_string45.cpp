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
	int len = s.size();
	int r = 0;

	if(len == 1){
		if(s[0] - '0' == 0){
			cout<<1;
			return 0;
		}
		r = (s[len - 1] - '0') % 4;
	}
	else{
		int last_two_digit = ((s[len - 2] - '0') * 10 + (s[len - 1] - '0'));
		r = last_two_digit % 4;
	}

	
	if(r == 1) cout<<8;
	else if(r == 2) cout<<4;
	else if(r == 3) cout<<2;
	else if(r == 0) cout<<6;
}
