// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 24. Biểu thức lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk24
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,k; cin>>n>>k;
	vector<int> v;
	int cnt_plus=0;
	ll res=0;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	sort(v.begin(), v.end(), greater<int>());
	auto it_first = v.begin();
	res = *it_first;
	v.erase(it_first);
	for(int x:v){
		if(cnt_plus<k){
			res+=x;
			cnt_plus++;
		}
		else{
			res-=x;
		}
	}
	cout<<res;
}
