// Problem: [Đệ Quy]. Bài 10. Tính tổng 5
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion10
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

double S(double n){
	if(n == 1) return 1;
	return 1/n + S(n-1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	double n; cin>>n;
	double res = S(n);
	cout<<fixed<<setprecision(3)<<res;
}
