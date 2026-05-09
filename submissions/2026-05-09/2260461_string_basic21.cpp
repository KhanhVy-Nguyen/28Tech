// Problem: [Xâu Ký Tự Cơ Bản]. Bài 21. to_string
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic21
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

string ToString(ll n){
	n = abs(n);
	string s;
	if(n == 0 ) return "0";
	else{
		while(n > 0){
			char digit = (n % 10) + '0';
			n /= 10;
			s += digit;
		}
	}
	reverse(s.begin(), s.end());
	
	return s; 
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<ToString(n)<<endl;
	
}
