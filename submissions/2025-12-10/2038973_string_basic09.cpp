// Problem: [Xâu Ký Tự Cơ Bản]. Bài 9. Chèn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic09
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s; getline(cin,s);
	int n; cin>>n;
	
	s.insert(n,"28tech");
	cout<<s;
	return 0;
}
