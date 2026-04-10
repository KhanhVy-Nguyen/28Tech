// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 13. Đổi tiền tham lam
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced13
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

	
	vector<int> v = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	ll n; cin>>n;
	int cnt = 0;
	for(int i=0; i<10; i++){
		cnt += n / v[i];
		n = n - (n / v[i] * v[i]);
	}
	cout<<cnt;
}
