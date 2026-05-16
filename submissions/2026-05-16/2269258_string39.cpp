// Problem: [Xâu Ký Tự]. Bài 39. Số chia hết cho 11
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string39
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
	if(n == 1) return s == "0";
	
	ll even_sum = 0, odd_sum = 0;
	for(int i = 0; i < n; i += 2){
		s[i] = s[i] - '0';
		even_sum += s[i];
	}
	for(int i = 1; i < n; i += 2){
		s[i] = s[i] - '0';
		odd_sum += s[i];
	}
	
	ll diff = abs(even_sum - odd_sum);
	
	if(diff % 11 != 0) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isDivisible(s)) cout<<"YES";
	else cout<<"NO";
}
