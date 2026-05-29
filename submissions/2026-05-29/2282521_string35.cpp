// Problem: [Xâu Ký Tự]. Bài 35. Số chia hết cho 6
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string35
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
//const ll mod = 1e9+7;

//another way from k


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	
	ll result = 0;
	int mod = 6;
	for(int i = 0; i < s.size(); i++){
		result = (result * 10) % mod + (s[i] - '0') % mod;
		result %= mod;
	}
	
	if(result == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
