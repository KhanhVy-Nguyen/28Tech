// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 36. Hòa nhạc
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk36
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
	multiset<int> ms;
	vector<int> v(m);
	for(int i=0; i<n; i++){
		int value; cin>>value;
		ms.insert(value);
	}
	for(int &x : v) cin>>x;
	
	for(int x:v){
		auto it = ms.upper_bound(x);
		it--;
		if(it != ms.end()){
			cout<<*it<<endl;
			ms.erase(it);
		}
		else{
			cout<<-1<<endl;
		}
		
	}
}
