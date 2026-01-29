// Problem: [Set & Map]. Bài 4. Truy vấn trên mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap04
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
	multiset<int> ms;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		ms.insert(a);
	}
	int q; cin>>q;
	while(q--){
		int act,x; cin>>act>>x;
		if(act==1){
			ms.insert(x);
		}
		else if(act==2){
			auto it = ms.find(x);
			if(it!=ms.end()) ms.erase(it);
		}
		else{
			if(ms.count(x)>=1) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
