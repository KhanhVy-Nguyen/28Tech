// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 28. Sắp đặt số 0
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk28
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
	vector<int> v;
	int cnt=0;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	for(int x:v){
		if(x!=0){
			cout<<x<<" ";
		}
		else cnt++;
	}
	for(int i=0; i<cnt; i++) cout<<0<<" ";
}
