// Problem: [Xâu Ký Tự Cơ Bản]. Bài 17. Sắp xếp các từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	
	
	sort(v.begin(), v.end());
	for(auto x : v){
		cout<<x<<" ";
	}
	
	cout<<endl;
	
	sort(v.begin(), v.end(), greater<>());
	for(auto x : v){
		cout<<x<<" ";
	}
	
	
}
