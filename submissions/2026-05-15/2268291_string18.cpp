// Problem: [Xâu Ký Tự]. Bài 18. Tạo email & mật khẩu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string18
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
    
	int t; cin>> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		
		
		vector<string> v;
		
		stringstream ss(s);
		string w;
		while(ss >> w){
			v.push_back(w);
		}
		int n = v.size();
		
		string dob = v[n - 1];
		string Email = "";
		
		string first_name = v[n - 2];
		for(auto &x : first_name){
			Email = Email + (char)tolower(x);
		}
		
		for(int i = 0; i < n - 2; i++){
			Email = Email + (char)tolower(v[i][0]);
		}
		
		Email += "@xyz.edu.vn";
		
		
		stringstream ss2 (dob);
		string token;
		string Pass = "";
		while(getline(ss2, token, '/')){
			Pass += to_string(stoi(token));
		}
		
		cout<<Email<<"\n";
		cout<<Pass<<"\n";
	}
}
