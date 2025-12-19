// Problem: [Set & Map Cơ Bản]. Bài 8. Map & int 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic08
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
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int x:a){
		mp[x]++;
	}
	for(int x:a){
		if(mp[x]!=0){
			cout<<x<<" "<<mp[x]<<endl;
			mp[x]=0;
		}
	}
}
