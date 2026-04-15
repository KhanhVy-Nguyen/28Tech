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
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	sort(v.begin(), v.end());
	
	ll res1 = abs(v[0] + v[1]);
	ll res2 = abs(v[n-1] + v[n-2]);
	
	cout<<max(res1, res2);
	
}
