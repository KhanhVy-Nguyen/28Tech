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
const ll mod = 1e9+7;

bool isDivisible(string s){
	int n = s.size();
	if(s[n - 1] % 2 != 0) return false;
	ll total = 0;
	for(auto x : s){
		x = x - '0';
		total += x;
	}
	if(total % 3 != 0) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isDivisible(s)) cout<<"YES";
	else cout<<"NO";
}
