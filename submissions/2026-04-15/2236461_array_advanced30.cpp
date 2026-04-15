// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 30. Chia mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced30
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
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	
	
	ll small = 0, big = 0;
	if(k < n - k){
		for(int i=0; i<k; i++){
		small += v[i];
		}
		for(int i=k; i<n; i++){
		big += v[i];
		}
	}
	else{
		for(int i=0; i<k; i++){
		big += v[i];
	}
	for(int i=k; i<n; i++){
		small += v[i];
	}
	}
	
	ll diff = big - small;
	cout<<diff;
}
