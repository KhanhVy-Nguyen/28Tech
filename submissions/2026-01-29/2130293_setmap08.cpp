// Problem: [Set & Map]. Bài 8. Lớn nhất, nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap08
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
	int min,max;
	set<int> s;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		s.insert(value);
	}
	int q; cin>>q;
	while(q--){
		int act; cin>>act;
		if(act==1){
			int x; cin>>x;
			s.insert(x);
		}
		else if(act==2){
			int x; cin>>x;
			s.erase(x);
		}
		else if(act==3){
			auto it = s.begin();
			min=*it;
			cout<<min<<endl;
		}
		else{
			auto it2 = s.rbegin();
			max=*it2;
			cout<<max<<endl;
		}
	}
	
}
