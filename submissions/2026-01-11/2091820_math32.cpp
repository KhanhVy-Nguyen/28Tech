// Problem: [Lý Thuyết Số – Toán Học]. Bài 32. Thừa số nguyên tố thứ K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math32
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int PrimeFactork(int n, int k){
	int cnt=0;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			while(n%i==0){
				cnt++;
				if(cnt==k){
					return i;
				}
				n/=i;
			}
		}
	}
	if(n!=1){
		cnt++;
		if(cnt==k) return n;
	}
	return -1;
}

int main(){
	int n,k; cin>>n>>k;
	cout<<PrimeFactork(n,k);
}
