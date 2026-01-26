// Problem: [Vector]. Bài 9. Đếm tần suất 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector09
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
	int a[n];
	vector <pair<int,int>> v;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int x:a){
		bool found=false;
		for(auto &p:v){
			if(p.first==x){
				p.second++;
				found=true;
				break;
			}
		}
		if(!found){
			v.push_back({x,1});
		}
	}
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	
	
}
