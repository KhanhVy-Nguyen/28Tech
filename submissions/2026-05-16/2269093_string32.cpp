// Problem: [Xâu Ký Tự]. Bài 32. Số đẹp 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string32
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPrime(int n){
	if(n < 2) return false;
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
}

bool isGood(string s){
	ll total = 0;
	for(auto &x : s){
		x = x - '0';
		total += x;
		if(!isPrime(x)) return false;
	}
	if(!isPrime(total)) return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isGood(s)) cout<<"YES";
	else cout<<"NO";
}
