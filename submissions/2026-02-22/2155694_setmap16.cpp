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

//key

int main(){
	int n; cin>>n;
	map<string,string> mp;
	for(int i=0; i<n; i++){
		string id; cin>>id;
		cin.ignore();
		string name; getline(cin,name);
		
		mp[id] = name;
	}
	
	int q; cin>>q;
	while(q--){
		string id; cin>>id;
		//or if(mp.contains(id)) C++20
		if(mp.find(id) != mp.end()){
			cout<<mp[id]<<endl;
		}
		else cout<< "NOT FOUND"<<endl;
	}
}
