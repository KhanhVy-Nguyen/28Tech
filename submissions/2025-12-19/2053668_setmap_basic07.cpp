// Problem: [Set & Map Cơ Bản]. Bài 7. Map & int
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic07
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
	multiset<int> mul;
	set<int> sam;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		sam.insert(a);
		mul.insert(a);
	}
	for(int b:sam){
		cout<<b<<" "<<mul.count(b)<<endl;
	}
	
}
