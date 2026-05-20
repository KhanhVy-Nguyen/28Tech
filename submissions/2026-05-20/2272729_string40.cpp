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

bool isDivisible(string s){
	ll reminder = 0;
	for(auto c : s){
		reminder = (reminder * 2 + (c - '0')) % 5;
	}
	
	if(reminder != 0) return false;
	return true;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isDivisible(s)) cout<<"YES";
	else cout<<"NO";
}
