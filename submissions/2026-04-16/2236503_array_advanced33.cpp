// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 33. Minimum subarray
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced33
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,k; cin>>n>>k;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	map<ll, ll> mp;
	mp[0] = -1;
	ll sum = 0, min_length = INT_MAX;
	for(int i = 0; i < n; i++){
		sum += v[i];
		if(mp.find(sum - k) != mp.end()){
			min_length = min(min_length, i - mp[sum - k]);
		}
		mp[sum] = i;
	}
	
	if(min_length == INT_MAX){
		cout<<-1;
	}
	else{
		cout<<min_length;
	}
}
