// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 77. Nhà gần nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk77
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int min_dis = INT_MAX;
	int n,q; cin>>n>>q;
	vector<int> v;
	for(int i = 0 ; i < n; i++){
		int house; cin>>house;
		v.push_back(house);
	}
	sort(v.begin(), v.end());
	while(q--){
		int des; cin>>des;
		auto it = lower_bound(v.begin(), v.end(), des);
		min_dis = INT_MAX;
		
		if(it != v.end()){
			min_dis = min(min_dis, (abs(des - *it)));
		}
		
		if(it != v.begin()){
			min_dis = min(min_dis, abs(des - *prev(it)));
		}
		
		
		cout<<min_dis<<"\n";
	}
}
