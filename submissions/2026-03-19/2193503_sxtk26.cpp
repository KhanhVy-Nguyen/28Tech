// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 26. Tìm kiếm có hiệu bằng X
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,x; cin>>n>>x;
	set<int> s;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		s.insert(value);
	}
	
	for(auto value:s){
		if(s.find(value-x) != s.end()){
			cout<<1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
