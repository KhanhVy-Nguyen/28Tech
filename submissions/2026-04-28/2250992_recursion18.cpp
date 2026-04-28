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

//key

ll evensum(ll n){
	if(n < 10){
		if(n % 2 == 0) return n;
		else return 0;
	}
	else{
		if(n % 10 % 2 == 0){
			return n % 10 + evensum(n / 10);
		}
		else{
			return evensum(n / 10);
		}
	}
}

ll oddsum(ll n){
	if(n < 10){
		if(n % 2 != 0) return n;
		else return 0;
	}
	else{
		if(n % 10 % 2 != 0){
			return n % 10 + oddsum(n / 10);
		}
		else{
			return oddsum(n / 10);
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	cout<<evensum(n)<<"\n"<<oddsum(n);
}
