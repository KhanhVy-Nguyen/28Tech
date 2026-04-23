// Problem: [Đệ Quy]. Bài 8. UCLN & BCNN
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion08
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll GCD(ll a, ll b){
	if(b == 0) return a;
	return GCD(b, a % b);
}

ll LCM (ll a, ll b){
	if(a == 0 || b == 0) return 0;
	return (a / GCD(a,b)) * b;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll a,b; cin>>a>>b;
	cout<<GCD(a,b)<<" "<<LCM(a,b);
}
