// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 21. Hợp và giao của 2 mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk21
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m; cin>>n>>m;
	vector<int> a;
	vector<int> b;
	set<int> res_intersection;
	
	for(int i=0; i<n; i++){
		int value; cin>>value;
		a.push_back(value);
		res_intersection.insert(value);
	}
	for(int i=0; i<m; i++){
		int value; cin>>value;
		b.push_back(value);
		res_intersection.insert(value);
	}
	
	for(int i=0; i<n; i++){
		auto it_union= find(b.begin(), b.end(), a[i]);
		if(it_union != b.end()){
			cout<<*it_union<<" ";
		}
	}
	cout<<endl;
	

	for(int x:res_intersection){
		cout<<x<<" ";
	}
	
}
