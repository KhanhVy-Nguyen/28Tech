// Problem: [Set & Map]. Bài 28. Tần suất lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap28
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool cmp(const pair<char,int>& a, const pair<char,int>& b){
	return a.second<b.second;
}

int main(){
	int n; cin>>n;
	map<char,int> mp;
	for(int i=0; i<n; i++){
		char c; cin>>c;
		mp[c]++;
	}
	
	auto max = max_element(mp.begin(), mp.end(), cmp);
	cout<<max->second<<endl;
	
	for(auto x:mp){
		if(max->second == x.second){
			cout<<x.first<<" ";
		}
	}
}
