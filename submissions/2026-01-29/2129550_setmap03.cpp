// Problem: [Set & Map]. Bài 3. Phần tử riêng biệt 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap03
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
	set<int> s;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=0; i<n; i++){
		if(s.count(a[i]) == 1){
			v.push_back(a[i]);
			s.erase(a[i]);
		}
	}
	
	for(int x:v) cout<<x<<" ";
	
}
