// Problem: [Comparator Lower_bound Upper_bound]. Bài 12. Last position
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator12
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
    
	int n, x; cin >> n >> x;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin>>a;
		v.push_back(a);
	}
	
	auto it_find = find(v.begin(), v.end(), x);
	if(it_find == v.end()){
		cout << -1 ;
		return 0;
	}
	else{
		auto it = upper_bound(v.begin(), v.end(), x);
		cout<<it - v.begin() - 1;
	}
	
	
	
}
