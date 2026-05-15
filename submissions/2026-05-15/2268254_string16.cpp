// Problem: [Xâu Ký Tự]. Bài 16. Chuẩn hóa tên 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string16
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
	for(auto &x : s){
		if(!isalpha(x)){
			x = ' ';
		}
	}
	
	stringstream ss(s);
	string w;
	vector<string> word;
	while(ss >> w){
		w[0] = toupper(w[0]);
		for(int i = 1; i < w.size(); i++){
			w[i] = tolower(w[i]);
		}
		word.push_back(w);
	}
	for(int i = 0 ; i < word.size(); i++){
		cout<<word[i]<<" ";
	}
	cout<<"\n";
	
	
	
	string d; cin>>d;
	stringstream ss2(d);
	string token;
	string res = "";
	while(getline(ss2, token, '/')){
		if(token.size() < 2){
			token = '0' + token;
		}
		res += token;
		
		if(res.size() < 10){
			res +='/';
		}
	}
	
	cout<<res;
}
