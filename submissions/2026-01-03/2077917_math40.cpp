// Problem: [Lý Thuyết Số – Toán Học]. Bài 40. Chữ số cuối cùng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math40
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//Gợi ý : 1378^n % 10 = 8^n % 10. 8^n có chữ số tận cùng với chu kỳ 4

int main(){
	ll n; cin>>n;
	if(n==0){
		cout<<1;
		return 0;
	}
	
	int mod4=n%4;
	
	if(mod4==1) cout<<8;
	else if (mod4==2) cout<<4;
	else if (mod4==3) cout<<2;
	else if (mod4==0) cout<<6;
	
	return 0;
}
