// Problem: [Comparator Lower_bound Upper_bound]. Bài 23. Đếm cặp bằng nhau
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator23
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
    
	int n, m; cin >> n >> m;
	map<int, ll> mpa;
	for(int i = 0; i < n; i++){
		int value; cin>>value;
		mpa[value]++;
	}
	
	int cnt = 0;
	for(int j = 0; j < m; j++){
		int b; cin>>b;
		if(mpa.find(b) != mpa.end()){
			cnt += mpa[b];
		}
	}
	
	cout<<cnt;
}
