// Problem: [Set & Map Cơ Bản]. Bài 7. Map & int
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic07
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
	int mang[n];
	for(int i=0; i<n; i++){
		cin>>mang[i];
	}
	for(int x:mang){
		mp[x]++;
	}
	for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
}
