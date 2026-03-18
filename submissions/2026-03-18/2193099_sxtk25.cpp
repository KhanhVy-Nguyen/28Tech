// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 25. Checkin sân bay
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk25
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
	vector<pair<int,int>> v;
	for(int i=0; i<t; i++){
		int time, during; cin>>time>>during;
		v.push_back({time, during});
	}
	
	sort(v.begin(), v.end());
	
	ll current_time = v[0].first + v[0].second;
	for(int i=1; i<t; i++){
		if(v[i].first > current_time){
			current_time = v[i].first+v[i].second;
		}
		else{
			current_time = current_time+v[i].second;
		}
	}
	cout<<current_time%24;
}
