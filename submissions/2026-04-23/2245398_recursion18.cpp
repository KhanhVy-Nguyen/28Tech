// Problem: [Đệ Quy]. Bài 18. Tính tổng chữ số chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll evensum(ll n){
	if(n == 0) return 0;
	int x = n % 10;
	if(x % 2 == 0) return x + evensum(n / 10);
	else return evensum(n / 10);
}

ll oddsum(ll n){
	if(n == 0) return 0;
	int x = n % 10;
	if(n % 2 != 0) return x + oddsum(n / 10);
	else return oddsum(n / 10);
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<evensum(n)<<"\n"<<oddsum(n);
}
