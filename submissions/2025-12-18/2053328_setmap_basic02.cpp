// Problem: [Set & Map Cơ Bản]. Bài 2. Set Map & int 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic02
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	set<int> sam;
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		sam.insert(a);
	}
	cout<<sam.size()<<"\n";
	for(auto it=sam.rbegin(); it!=sam.rend(); it++){
		cout<<*it<<" ";
	}
	
}
