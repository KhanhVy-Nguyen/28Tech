// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 39. Missing coin sum
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk39
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//greedy

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin >> n;
	vector<int> coins;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		coins.push_back(a);
	}
	
	sort(coins.begin(), coins.end());
	
	ll res = 1;
	
	for(auto x : coins){
		if(x > res) break;
		res += x;
	}
	
	cout << res;
}