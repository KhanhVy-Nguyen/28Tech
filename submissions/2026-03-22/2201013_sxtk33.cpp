// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 33. Distinct number
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk33
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
	set<int> s;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		s.insert(value);
	}
	cout<<s.size();
}
