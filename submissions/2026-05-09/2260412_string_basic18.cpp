// Problem: [Xâu Ký Tự Cơ Bản]. Bài 18. Sắp xếp từ theo chiều dài
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic18
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
    
    vector<string> v;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	while(ss >> word){
		v.push_back(word);
	}
	sort(v.begin(), v.end(), [](const string& a, const string& b){
		if(a.size() != b.size()){
			return a.size() < b.size();
		}
		return a < b;
	});
	
	for(auto x : v){
		cout<<x<< " "; 
	}
	
}
