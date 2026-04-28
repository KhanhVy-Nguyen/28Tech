// Problem: [Đệ Quy]. Bài 12. Thập phân sang hệ thập lục phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion12
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

void ToHex(ll n){
	if(n == 0) return;
	if(n > 1) ToHex(n / 16);
	int digit = n % 16;
	if(digit <= 9){
		cout<<digit;
	}
	else{
		cout<<(char)(digit + 'A' - 10);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>> n;
	if(n == 0) cout<<0;
	else{
		ToHex(n);
	}
	
}
