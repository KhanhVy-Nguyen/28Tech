// Problem: [Lý Thuyết Số – Toán Học]. Bài 39. Tính giá trị của hàm F
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math39
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ll n; cin>>n;
	if(n%2==0){
		cout<<n/2;
	}
	else cout<<-(n/2+1);
	return 0;
}
