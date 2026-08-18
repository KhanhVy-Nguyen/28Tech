// Problem: [Comparator Lower_bound Upper_bound]. Bài 22. Tổng các phần tử không vượt quá X
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator22
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
    
	int n, q; cin >> n >> q;
	vector<int> v;
	for(int i = 0; i < n ; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	
	vector<ll > pref(n + 1, 0);
	for(int i = 0; i < n; i++){
		pref[i + 1] = pref[i] + v[i];
	}
	
	
	while(q--){
		int b; cin >> b;
		
		auto it = upper_bound(v.begin(), v.end(), b);
		int index = it - v.begin();
		cout<<pref[index] << " ";
		
	}
	
}
