// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 50. Số cặp chẵn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic50
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	ll even=0, odd=0;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		if(a%2==0) even++;
		else odd++;
	}
	
	ll res = even*(even-1)/2 + odd*(odd-1)/2;
	cout<<res;
}
