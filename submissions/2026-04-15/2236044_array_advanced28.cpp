// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 28. Product sum
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced28
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
    
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(), v.end());
	
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += ((v[i] % mod) * i) % mod;
		sum %= mod;
	}
	cout<<sum;
}
