// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 31. Maximum pair
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced31
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
	vector<int> v;
	int min_value = INT_MAX;
	int max_value = INT_MIN;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		value = abs(value);
		min_value = min(value, min_value);
		max_value = max(value, max_value);
	}
	
	cout<<abs(max_value - min_value);
	
}
