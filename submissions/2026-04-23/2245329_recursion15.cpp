// Problem: [Đệ Quy]. Bài 15. Tìm chữ số đầu tiên của số nguyên
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion15
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int firstdigit(ll n){
	if(n < 10){
		return n;
	}
	
	return firstdigit(n / 10);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<firstdigit(n);
}
