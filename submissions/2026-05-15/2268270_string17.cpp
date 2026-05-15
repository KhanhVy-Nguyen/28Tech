// Problem: [Xâu Ký Tự]. Bài 17. Chuẩn hóa tên 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

string CL(string s){
	for(auto &x : s){
		x = toupper(x);
	}
	return s;
}

string NM(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	string s; getline(cin, s);
	for(auto &x : s){
		if(!isalpha(x)){
			x = ' ';
		}
	}
	
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	
	int n = v.size();
	
	for(int i = 0; i < n - 1; i++){
		cout<<NM(v[i]);
		if(i != n - 2) cout<<" ";
	}
	cout<<", "<<CL(v[n - 1])<<"\n";
	
	
	cout<<CL(v[n - 1])<<", ";
	for(int i = 0; i < n - 1; i++){
		cout<<NM(v[i])<<" ";
	}
	
	
}
