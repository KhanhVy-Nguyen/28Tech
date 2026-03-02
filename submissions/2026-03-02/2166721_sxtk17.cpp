// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 17. Cặp số có tổng bằng K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk17
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
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	sort(v.begin(), v.end());
	ll cnt=0;
	for(int i=0; i<n; i++){
		auto it_start=lower_bound(v.begin() + i +1, v.end(),k-v[i]);
		auto it_end = upper_bound(v.begin() + i +1, v.end(),k-v[i]);
		it_end--;
		
		if(it_start <= it_end){
			cnt = cnt + (it_end - it_start +1);
		}
	}
	cout<<cnt;
}
