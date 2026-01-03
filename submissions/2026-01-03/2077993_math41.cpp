// Problem: [Lý Thuyết Số – Toán Học]. Bài 41. Số gần thuận nghịch
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math41
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



bool bend(ll n){
	int last_digit=n%10;
	n/=10;
	while(n>10){
		n/=10;
	}
	ll first_digit=n;
	if(first_digit/last_digit==2 || last_digit/first_digit==2) return true;
	else return false;
}

bool Palindrome(ll n){
	ll a=n;
	int re=0;
	while(a>0){
		re=re *10 + a%10;
		a/=10; 
	}
	return re==n;
}

bool Palinbet(ll n){
	int last_digit=n%10;
	n/=10;
	ll temp=n;
	int cnt=0;
	while(n>0){
		n/=10;
		cnt++;
	}
	temp = temp % (ll)pow(10,cnt-1);
	if(Palindrome(temp)) return true;
	else return false;
}
int main(){
	ll n; cin>>n;
	if(bend(n) && Palinbet(n)) cout<<"YES";
	else cout<<"NO";
}
