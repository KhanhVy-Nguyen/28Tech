// Problem: [Lý Thuyết Số – Toán Học]. Bài 34. Số nguyên dương chia hết cho x, y, z
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math34
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


int main(){
	ll x,y,z,n; cin>>x>>y>>z>>n;
	ll Min=ll (pow(10,n-1));
	ll Max=ll (pow(10,n) - 1);
	ll LCM=lcm(lcm(x,y),z);
	ll res=(Min+LCM-1)/LCM*LCM;
	if(res>Max){
		cout<<-1;
	}
	else cout<<res;
	
}
