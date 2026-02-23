// Problem: [Set & Map]. Bài 26. Tần suất truy cập
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	map<string,int> mp;
	string s;
	while(cin>>s){
		mp[s]++;
	}
	
	for(auto entry:mp){
		cout<<entry.first<<" "<<entry.second<<endl;
	}
}
