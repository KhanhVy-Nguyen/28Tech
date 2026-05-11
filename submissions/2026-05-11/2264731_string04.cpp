// Problem: [Xâu Ký Tự]. Bài 4. Ký tự xuất hiện nhiều nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string04
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
    
	
	string s; cin>>s;
	map<char, int> mp;
	for(char x : s){
		mp[x]++;
	}
	
	int max_fre = 0, min_fre = INT_MAX;
	char max_res, min_res;
	for(auto it : mp){
		if(it.second >= max_fre){
			max_fre = it.second;
			max_res = it.first;
		}
		
		if(it.second <= min_fre){
			min_fre = it.second;
			min_res = it.first;
		}
	}
	
	
	cout<<max_res<<" "<<max_fre<<"\n";
	cout<<min_res<<" "<<min_fre<<"\n";
}
