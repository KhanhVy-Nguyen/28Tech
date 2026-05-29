// Problem: [Xâu Ký Tự]. Bài 40. Số nhị phân chia hết cho 5
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string40
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//another way from k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	ll value = 1; 
	ll result = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		result = result % 5 + (s[i] - '0') * value % 5;
		result %= 5;
		value = (value % 5) * (2 % 5);
		value %= 5;
	}
	
	if(result == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	
}
