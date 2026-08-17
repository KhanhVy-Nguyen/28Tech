// Problem: [Comparator Lower_bound Upper_bound]. Bài 21.  Đếm số lần xuất hiện
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator21
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
    
	int n, q; cin >> n >> q;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		mp[a]++;
	}
	for(int i = 0; i < q; i++){
		int b; cin >> b;
		cout<< mp[b] << " ";
	}
}
