// Problem: [Xâu Ký Tự Cơ Bản]. Bài 8. 28tech vào Tèo
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic08
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	string s;
	getline(cin,s);
	
	string del="28tech";
	for(int i=0; i<s.size(); ){
		if(del.find(s[i])!=string::npos){
			s.erase(i,1);
		}
		else i++;
	}
	if(s.size() == 0) cout<<"EMPTY";
	cout<<s;
	return 0;
}
