// Problem: [Set & Map]. Bài 24. Map & String
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap24
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool cmp(const pair<string,int>& a, const pair<string,int>& b){
	return a.second<b.second;
}

int main(){
	int n; cin>>n;
	map<string,int> mp;
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
		mp[s]++;
	}
	
	for(auto entry:mp){
		cout<<entry.first<<" "<<entry.second<<endl;
	}
	cout<<endl;
	auto min = min_element(mp.begin(), mp.end(), cmp);
	auto max = max_element(mp.begin(), mp.end(), cmp);
	
	cout<<min->first<<" "<<min->second<<endl;
	cout<<max->first<<" "<<max->second<<endl;
}
