// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 34. Max distance
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced34
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
    
	int n,k; cin>>n>>k;
	vector<int> v(n);
	map<ll, ll> mp;
	for(int i=0; i<n; i++){
		cin>>v[i];
		mp[v[i]] = i;
	}
	
	int max_distance = INT_MIN;
	for(int i=0; i<n; i++){
		int v1 = v[i] + k;
		int v2 = v[i] - k;
		if(mp.count(v1)){
			int index = mp[v1];
			int distance = abs(i - index);
			max_distance = max(distance, distance);
		}
		if(mp.count(v2)){
			int index = mp[v2];
			int distance = abs(i - index);
			max_distance = max(distance, distance);
		}
	}
	
	if(max_distance == INT_MIN){
		cout<<-1;
	}
	else cout<<max_distance;
}
