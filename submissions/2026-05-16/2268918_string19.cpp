// Problem: [Xâu Ký Tự]. Bài 19. Tạo email và mật khẩu 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string19
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
    
	int t; cin>>t;
	cin.ignore();
	
	map<string, int> email_cnt;
	
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string w;
		vector<string> v;
		while(ss >> w){
			v.push_back(w);
		}
		
		int n = v.size();
		
		string first_name = v[n - 2];
		string Email = "";
		
		for(auto &x : first_name){
			Email = Email + (char)tolower(x);
		}
		for(int i = 0; i < n - 2; i++){
			Email = Email + (char)tolower(v[i][0]);
		}
		
		email_cnt[Email]++;
		
		
		
		
		
		string dob = v[n - 1];
		stringstream ss2(dob);
		string token;
		string Pass;
		while(getline(ss2, token, '/')){
			Pass += to_string(stoi(token));
		}
		
		
		if(email_cnt[Email] == 1){
			cout<<Email<<"@xyz.edu.vn"<<"\n";
		}
		else{
			cout<<Email<<email_cnt[Email]<<"@xyz.edu.vn"<<"\n";
		}
		cout<<Pass<<"\n";
	}
}
