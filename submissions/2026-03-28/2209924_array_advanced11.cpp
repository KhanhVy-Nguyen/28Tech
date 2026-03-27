// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 11. Tìm hợp và giao 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced11
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
    
	int n,m; cin>>n>>m;
	set<int> s1,s2,s;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		s1.insert(value);
		s.insert(value);
	}
	for(int i=0; i<m; i++){
		int value; cin>>value;
		s2.insert(value);
		s.insert(value);
	}
	
	for(int x:s) cout<<x<<" ";
	cout<<"\n";
	
	if(s1.size() < s2.size()){
		for(int x:s1){
			if(s2.find(x) != s2.end()){
				cout<<x<<" ";
			}
		}
	}
	else{
		for(int x:s2){
			if(s1.find(x) != s1.end()){
				cout<<x<<" ";
			}
		}
	}
}
