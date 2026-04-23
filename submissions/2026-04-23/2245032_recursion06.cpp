// Problem: [Đệ Quy]. Bài 6. Fibonacci
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion06
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


ll fibo(int n){
	if(n == 1) return 0;
	if(n == 2) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cout<<fibo(n);
}
