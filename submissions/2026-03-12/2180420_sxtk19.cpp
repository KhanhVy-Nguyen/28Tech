// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 19. Cặp số có tổng lớn hơn k
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk19
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
	int n,k; cin>>n>>k;
	vector<int> v;
	ll cnt = 0;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		auto it = upper_bound(v.begin()+i+1,v.end(),k-v[i]) - v.begin();
		
		cnt = cnt + (n-it);
	}
	cout<<cnt;
}
