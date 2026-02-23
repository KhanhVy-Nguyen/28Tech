// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 5. Số lần xuất hiện
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk05
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
	return a.second<b.second;
}

int main(){
	int n; cin>>n;
	map<int, int> mp;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		mp[a]++;
	}
	
	auto max_fre = max_element(mp.begin(), mp.end(), cmp);
	
	for(auto x:mp){
		if(max_fre->second == x.second){
			cout<<x.first<<" "<<x.second;
			break;
		}
	}
}
