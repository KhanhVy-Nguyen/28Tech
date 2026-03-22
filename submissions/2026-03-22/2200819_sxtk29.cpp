// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 29. Sắp xếp chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk29
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
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	vector<int> res(n);
	sort(v.begin(), v.end());
	
	int index =0;
	for(int i=0; i<n; i+=2){
		res[i]=v[index];
		index++;
	}
	for(int i=1; i<n; i+=2){
		res[i]=v[index];
		index++;
	}
	for(int x:res) cout<<x<<" ";
	
}
