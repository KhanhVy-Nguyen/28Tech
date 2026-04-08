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



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n; 
	ll sum = 0;
	map<int, int> mp;
	unordered_set<int> us;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		mp[value]++;
		us.insert(value);
	}
	
	for(int x : us){
		sum += (mp[x] * (mp[x] - 1)) / 2;
	}
	cout<<sum;
}
