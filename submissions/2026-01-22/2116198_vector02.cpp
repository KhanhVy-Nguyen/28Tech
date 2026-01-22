// Problem: [Vector]. Bài 2. Erase và insert
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector02
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int m; cin>>m;
	vector<int> v;
	for(int i=0; i<m; i++){
		int a; cin>>a;
		v.push_back(a);
	}
	int n; cin>>n;
	while(n--){
		int a; cin>>a;
		if(a==1){
			int b,c; cin>>b>>c;
			v.insert(v.begin()+b,c);
		}
		else{
			int a2; cin>>a2;
			v.erase(v.begin()+a2);
		}
	}
	for(int x:v) cout<<x<<" ";
	
}
