// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 18. Cặp số có tổng nhỏ hơn K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk18
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
	for(int i=0; i<n; i++) cin>>v[i];
	
	sort(v.begin(), v.end());
	ll cnt=0;
	for(int i=0; i<n; i++){
		//vi tri dau tien >= k-v[i]
		auto it_end = lower_bound(v.begin() + i + 1, v.end(), k-v[i]) - v.begin();
		it_end--;
		
		cnt = cnt + (it_end - (i+1) + 1);
	}
	cout<<cnt;
}
