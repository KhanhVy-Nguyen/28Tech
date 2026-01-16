// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 45. Dãy con nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic45
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
	int a[n];
	int total=0;
	int res=0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			total+=a[j];
			if(isPrime(total)) res++;
		}
		total=0;
	}
	cout<<res;
}
