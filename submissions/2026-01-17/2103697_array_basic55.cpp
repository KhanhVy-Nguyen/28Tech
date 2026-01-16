// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 55. Thay đổi nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic55
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPrime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		if(isPrime(a)){
			a=28;
			cout<<a<<" ";
		}
		else cout<<a<<" ";
	}
}
