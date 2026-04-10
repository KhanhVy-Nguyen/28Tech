// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 15. BRT SPOJ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced15
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
	map<int, int> mp;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	sort(v.begin(), v.end());
	
	int distance = INT_MAX;
	for(int i=1; i<n; i++){
		
		distance = min(distance, abs(v[i-1] - v[i]));
		mp[distance]++;
	}
	cout<<distance<<" "<<mp[distance];
}
