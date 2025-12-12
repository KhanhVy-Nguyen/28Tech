// Problem: [Lý Thuyết Số – Toán Học]. Bài 17. Ước số nguyên tố lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int uocmax(int n){
	int res=0;
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			res=max(res,i);
			n/=i;
		}
	}
	if(n>1) res=n;
	return res;
}

int main(){
	int t; cin>>t;
	for(int i=1; i<=t; i++){
		int n; cin>>n;
		cout<<uocmax(n)<<endl;
		
	}
}
