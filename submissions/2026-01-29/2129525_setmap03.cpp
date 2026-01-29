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
	set<int> s;
	while(n--) {
		int a; cin>>a;
		s.insert(a);
	}
	
	for(int x:s) cout<<x<<" ";
	
}
