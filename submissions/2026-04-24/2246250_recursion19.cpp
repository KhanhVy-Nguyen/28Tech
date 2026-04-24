// Problem: [Đệ Quy]. Bài 19. Kiểm tra chữ số chẵn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion19
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isfulleven(ll n){
	if(n == 0) return true;
	int x = n % 10;
	isfulleven(n / 10);
	if(x % 2 != 0) {
		return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	if(isfulleven(n)) cout<<"YES";
	else cout<<"NO";
}
