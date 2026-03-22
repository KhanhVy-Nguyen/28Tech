// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 35. Xếp trẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk35
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
	vector<int> v(n);
	for(int &value : v) cin>>value;
	
	int cnt = 0, l = 0, r = n-1;
	sort(v.begin(), v.end());
	
	while(l <= r){
		if(v[l] + v[r] <= x){
			l++;
			r--;
			
		}
		else{
			r--;
		}
		cnt++;
	}
	cout<<cnt;
}
