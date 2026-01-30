// Problem: [Set & Map]. Bài 16. Tìm kiếm sinh viên
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap16
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
	cin.ignore();
	map<string, string> mp;
	for(int i=0; i<n; i++){
		string msv; getline(cin,msv);
		string name; getline(cin,name);
		mp[msv] = name;
	}
	
	int q; cin>>q;
	cin.ignore();
	while(q--){
		string query; getline(cin, query);
		if(mp.count(query)){
			cout<<mp[query]<<endl;
		}
		else cout<<"NOT FOUND"<<endl;
	}
	
}
