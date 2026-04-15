// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 27. Số thao tác giúp mảng tăng dần 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced27
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
    
	int n,d; cin>>n>>d;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	ll cnt = 0;
	for(int i=1; i<n; i++){
		if(v[i] <= v[i-1]){
			int diff = v[i-1] - v[i];
			ll ops = (diff + d) / d;
			cnt += ops;
			v[i] = v[i] + ops * d;
		}
		
	}
	cout<<cnt;
}
