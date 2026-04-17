// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 36. Mảng con tổng bằng 0
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced36
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
	for(int i = 0; i < n; i++) cin>>v[i];
	
	set<int> prefix;
	ll current_prefix = 0;
	for(int i=0; i<n; i++){
		current_prefix = current_prefix + v[i];
		if(current_prefix == 0 || prefix.find(current_prefix) != prefix.end()){
			cout<<1;
			return 0;
		}
		prefix.insert(current_prefix);
	}
	cout<<-1;
	
}
