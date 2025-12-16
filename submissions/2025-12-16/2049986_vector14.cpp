// Problem: [Vector]. Bài 14. Vector char
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



vector<char> nhap(){
	vector<char> c;
	char x;
	while(cin>>x){
		c.push_back(x);
	}
	return c;
}

vector<char> thaydoi(vector<char> &v){
	for(char &x:v){
		if(islower(x)){
			x=toupper(x);
		}
		else if(isupper(x)){
			x=tolower(x);
		}
	}
	return v;
}


void in(vector<char> v){
	for(char i:v) cout<<i<<" ";
}

int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
