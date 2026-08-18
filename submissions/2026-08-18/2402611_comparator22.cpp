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
	
	while(q--){
		int b; cin >> b;
		ll total = 0;
		auto it = upper_bound(v.begin(), v.end(), b);
		int index = it - v.begin();
		
		for(int i = 0; i < index; i++){
			total += v[i];
		}
		cout<<total<<" ";
		
	}
	
}
