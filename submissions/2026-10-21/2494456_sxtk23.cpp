// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 23. Sắp xếp theo tần suất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk23
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
	vector<int> a(n);
	map<int, int> mp;
	map<int, int> first_idx;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
		if(first_idx.find(a[i]) == first_idx.end()){
			first_idx[a[i]] = i;
		}
	}
	
	vector<pair<int, int>> vv1(mp.begin(), mp.end());
	
	sort(vv1.begin(), vv1.end(), [](const auto&a, const auto&b){
		if(a.second != b.second){
			return a.second > b.second;
		}
		return a < b;
	});
	
	for(auto x : vv1){
		int value = x.first;
		int freq = x.second;
		while(freq--){
			cout << value << " ";
		}
	}
	cout << "\n";
	
	
	vector<pair<int, int>> vv2;
	
	for(int i = 0; i < n; i++){
		if(first_idx[a[i]] == i){
			vv2.push_back({a[i], mp[a[i]]});
		}
	}
	stable_sort(vv2.begin(), vv2.end(), [](const auto&a, const auto&b){
		return a.second > b.second;
	});
	
	for(auto x : vv2){
		int value2 = x.first;
		int freq2 = x.second;
		while(freq2--){
			cout << value2 << " ";
		}
	}
	
}