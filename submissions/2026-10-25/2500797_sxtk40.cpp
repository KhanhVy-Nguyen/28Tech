// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 40. Thu thập số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk40
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
    
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	ll cnt = 0;
	int cur_number = 1;
	int index = 0;
	int lim = *max_element(v.begin(), v.end());
	
	while(cur_number <= lim){
		for(int i = 0; i < n; i++){
			if(v[i] == cur_number){
				cur_number++;
			}
		}
		cnt ++;
	}
	
	cout << cnt;
}