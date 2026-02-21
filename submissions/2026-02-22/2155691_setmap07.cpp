// Problem: [Set & Map]. Bài 7. Phần tử xuất hiện ở mọi hàng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	int n; cin>>n;
	map<int ,int> mp;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int value; cin>>value;
			if(mp[value]==i-1){
				mp[value]=i;
			}
		}
	}
	
	bool isExist = false;
	
	for(auto x:mp){
		if(x.second == n){
			cout<<x.first<<" ";
			isExist=true;
		}
	}
	if(!isExist) cout<<"NOT FOUND";
}
