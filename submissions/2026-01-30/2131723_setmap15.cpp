// Problem: [Set & Map]. Bài 15. Set, Lower_bound, Upper_bound
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap15
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
	for(int i=0; i<n; i++){
		int a; cin>>a;
		ms.insert(a);
	}
	int q; cin>>q;
	while(q--){
		int query; cin>>query;
		if(query == 1){
			int value1; cin>>value1;
			ms.insert(value1);
		}
		else if(query == 2){
			int value2; cin>>value2;
			auto it2 = ms.find(value2);
			if(it2 != ms.end()){
				ms.erase(it2);
			}
		}
		else if(query == 3){
			int value3; cin>>value3;
			auto it3 = ms.lower_bound(value3);
			if(it3 == ms.end()) cout<<-1<<endl;
			else cout<<*it3<<endl;
		}
		else {
			int value4; cin>>value4;
			auto it4 = ms.upper_bound(value4);
			if(it4 == ms.end()) cout<<-1<<endl;
			else{
				it4--;
				cout<<*it4<<endl;
			}
		}
	}
}
