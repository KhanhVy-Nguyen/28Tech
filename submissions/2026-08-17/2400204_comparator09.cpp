// Problem: [Comparator Lower_bound Upper_bound]. Bài 9. Sắp xếp theo second, first
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator09
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
	vector<pair<int, int>> vp;
	for(int i = 0; i < n ; i++){
		int a, b; cin>> a >> b;
		vp.emplace_back(a,b);
	}
	
	sort(vp.begin(), vp.end(), [](const pair<int, int>& a, const pair<int, int>& b){
		if(a.second != b.second) return a.second < b.second;
		return a.first > b.first;
	});
	
	for(auto x : vp){
		cout<<x.first << " " << x.second << endl;
	}
}
