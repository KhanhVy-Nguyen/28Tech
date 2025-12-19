// Problem: [Set & Map]. Bài 1. Phần tử riêng biệt
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap01
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	map<int,int> mp;
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		mp[a]=1;;
	}
	cout<<mp.size();
}
