// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 22. Sắp xếp chữ số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk22
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int t; cin>>t;
	set<int> res;
	while(t--){
		int n; cin>>n;
		while(n>0){
			int one = n%10;
			n/=10;
			res.insert(one);
		}
	}
	
	for(int x:res) cout<<x<<" ";
	
}
