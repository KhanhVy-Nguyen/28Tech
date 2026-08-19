// Problem: [Comparator Lower_bound Upper_bound]. Bài 24. Đếm cặp 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator24
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
    
	int n, d; cin >> n >> d;
	vector<ll> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	
	ll cnt = 0;
	int l = 0;
	for(int r = 1; r < n; r++){
		while(v[r] - v[l] > d){
			l++;
		}
		cnt += r - l;
	}
	cout<< cnt;
}
