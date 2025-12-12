// Problem: [Lý Thuyết Số – Toán Học]. Bài 18. Bình phương nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool primex(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt>=2) return true;
		}
	}
	if(n>1) return false;
}

int main(){
	int a,b; cin>>a>>b;
	for(int i=a; i<=b; i++){
		if(primex(i)) cout<<i<<" ";
	}
}
