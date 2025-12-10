// Problem: [Xâu Ký Tự Cơ Bản]. Bài 13. Liệt kê từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic13
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	string s; getline(cin,s);
	string del={'.', ',', '!', '?'};
	for(int i=0; i<s.size();){
		if(del.find(s[i]) != string::npos){
			s.erase(i,1);
		}
		else{
			i++;
		}
	}
	cout<<s;
	
}
