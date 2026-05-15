// Problem: [Xâu Ký Tự]. Bài 21. Tập từ chung của 2 xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string21
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
    
	
	string a, b; 
	
	getline(cin, a);
	getline(cin, b);
	
	stringstream ss1(a);
	stringstream ss2(b);
	
	set<string> se1;
	set<string> se2;
	
	string w1, w2;
	while(ss1 >> w1){
		for(auto &x : w1) x= tolower(x);
		se1.insert(w1);
	}
	while(ss2 >> w2){
		for(auto &x : w2) x= tolower(x);
		se2.insert(w2);
	}
	
	int n = se1.size();
	int m = se2.size();
	
	
	if(n < m){
		for(auto it = se1.begin(); it != se1.end(); it++){
			if(se2.find(*it) != se2.end()){
				cout<<*it<<" ";
			}
		}
	}
	else{
		for(auto it = se2.begin(); it != se2.end(); it++){
			if(se1.find(*it) != se1.end()){
				cout<<*it<<" ";
			}
		}
	}
}
