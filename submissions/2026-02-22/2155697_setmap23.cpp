// Problem: [Set & Map]. Bài 23. Liệt kê tần suất chẵn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap23
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	map<int,int> mp;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		mp[a]++;
	}
	
	for(auto x:mp){
		if(x.second %2==0){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
	cout<<endl;
	
	for(auto it=mp.rbegin(); it!=mp.rend(); it++){
		if(it->second %2==0){
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
}
