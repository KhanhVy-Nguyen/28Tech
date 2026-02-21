// Problem: [Set & Map]. Bài 5. Tần suất ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap05
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//anh Binh viet 

int main(){
	int n; cin>>n;
	map<char,int> mp;
	for(int i=0; i<n; i++){
		char c; cin>>c;
		mp[c]++;
	}
	
	auto it1 = mp.begin();
	cout<< it1->first << " " << it1->second <<endl;
	//or   (*it1).first         (*it1).second
	cout<<endl;
	
	auto it2 = mp.rbegin();
	cout<< it2->first <<" "<< it2->second<<endl;
	cout<<endl;
	
	for(auto x:mp){
		cout<< x.first <<" "<< x.second <<endl;
	}
	cout<<endl;
	
	for(auto it=mp.rbegin(); it!=mp.rend(); it++){
		cout<< it->first <<" "<< it->second<<endl;
	}
}
