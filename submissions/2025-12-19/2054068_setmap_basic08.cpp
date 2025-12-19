// Problem: [Set & Map Cơ Bản]. Bài 8. Map & int 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic08
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
	multiset<int> sam;
	vector<int> order;
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		if(sam.find(a)==sam.end()){
			order.push_back(a);
		}
		sam.insert(a);
	}
	for(int x:order){
		cout<<x<<" "<<sam.count(x)<<"\n";
	}
}
