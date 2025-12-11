// Problem: [Vector]. Bài 1. Push & Pop
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector01
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


int main(){
	int times; cin>>times;
	vector<int> v;
	for(int i=0; i<times; i++){
		int n; cin>>n;
		if(n==1){
			int m; cin>>m;
			v.push_back(m);
		}
		else if(n==2){
			if(v.empty()==false){
				v.pop_back();
			}
		}
	}
	if(v.empty()) cout<<"EMPTY";
	else{
		for(auto i:v){
			cout<<i<<" ";
		}
	}

}
