// Problem: [Đệ Quy]. Bài 5. Tính giai thừa
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion05
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int factorial(int n){
	if(n == 0) return 1;
	return n * factorial(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cout<<factorial(n);
}
