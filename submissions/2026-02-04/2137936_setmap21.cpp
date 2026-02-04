// Problem: [Set & Map]. Bài 21. Set & kiểu char
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap21
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
	set<char> s;
	for(int i=0; i<n; i++){
		char a; cin>>a;
		s.insert(a);
	}
	
	cout<<s.size()<<endl;
	for(char x:s) cout<<x<<" ";
	cout<<endl;
	for(auto it=s.rbegin(); it!=s.rend(); it++){
		cout<<*it<<" ";
	}
}
