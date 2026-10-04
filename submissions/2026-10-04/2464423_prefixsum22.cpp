// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 22. Đèn lồng 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum22
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
    
	int n, lanterns; cin >> n >> lanterns;
	vector<ll> diff(n + 2, 0);
	for(int i = 1; i <= lanterns; i++){
		ll a, b; cin >> a >> b;
		diff[a]++;
		diff[b + 1]--;
	}
	
	vector<ll> prefix(n + 2, 0);
	for(int i = 1; i <= n; i++){
		prefix[i] = prefix[i - 1] + diff[i];
	}
	
	auto cnt = count(prefix.begin(), prefix.end(), 0);
	cnt -= 2;
	cout << cnt ;
	
}
