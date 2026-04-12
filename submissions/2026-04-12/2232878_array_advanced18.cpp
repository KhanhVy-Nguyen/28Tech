// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 18. Đếm số lượng cặp số bằng nhau
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n; 
	map<int, ll> mp;
	unordered_set<int> us;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		mp[value]++;
		
	}
	
	ll cnt = 0;
	for(auto entry : mp){
		if(entry.second > 1){
			cnt = cnt + 1ll * entry.second * (entry.second - 1) / 2;
		}
	}
	cout<<cnt;
	
}
