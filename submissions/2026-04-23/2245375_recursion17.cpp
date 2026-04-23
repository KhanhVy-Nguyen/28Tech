// Problem: [Đệ Quy]. Bài 17. In ra số nguyên
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

void LtoR(ll n){
	if(n == 0) return ;
	int x = n % 10; 
	LtoR(n / 10);
	cout<<x<<" ";
}

void RtoL(ll n){
	if(n == 0) return ;
	int x = n % 10; 
	cout<<x<<" ";
	RtoL(n / 10);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	LtoR(n);
	cout<<"\n";
	RtoL(n);
}
