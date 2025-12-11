// Problem: [Xâu Ký Tự Cơ Bản]. Bài 14. Tí và 28tech
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int cnt=0;
	string s;
	while(cin>>s){
		string a=s;
		for(char &c:a){
			c=tolower(c);
		}
		if(a=="28tech"){
			cnt++;
		}
	}
	cout<<cnt;
}
