// Problem: [Comparator Lower_bound Upper_bound]. Bài 17. Số trong đoạn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator17
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
    
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin>> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		int cnt = 0;
		auto it_lower = lower_bound(v.begin(), v.end(), l);
		auto it_upper = upper_bound(v.begin(), v.end(), r);
		
		int l_index = it_lower - v.begin();
		int r_index = it_upper - v.begin() - 1;
		
		cnt = r_index - l_index + 1;
		
		cout<< cnt <<endl;
	}
}
