// Problem: [Đệ Quy]. Bài 16. Chữ số lớn nhất, nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion16
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int maxdigit(ll n){
	if(n < 10) return n;
	int digit = n % 10;
	return max(digit, maxdigit(n / 10));
}

int mindigit(ll n){
	if(n < 10) return n;
	int digit = n % 10;
	return min(digit, mindigit(n / 10));
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<maxdigit(n)<<" "<<mindigit(n);
}
