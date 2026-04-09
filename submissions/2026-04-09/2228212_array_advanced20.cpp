// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 20. Sliding window
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced20
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
    
	int n,k; cin>>n>>k;
	vector<int> v;
	vector<int> res;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		auto it = find(v.begin(), v.end(), value);
		if(it == v.end()){
			v.push_back(value);
		}
		
	}
	sort(v.begin(), v.end(), greater<int>());
	
	ll sum = 0;
	for(int i=0; i<k; i++){
		res.push_back(v[i]);
		sum += v[i];
		
	}
	sort(res.begin(), res.end());
	
	cout<<sum<<"\n";
	for(int x : res) cout<<x<<" ";
}
