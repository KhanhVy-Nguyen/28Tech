// Problem: [Set & Map]. Bài 29. Kí tự chữ cái khác nhau
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap29
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	set<char> s;
	for(int i=0; i<n; i++){
		char c; cin>>c;
		if(!isdigit(c)){
			char c2 = tolower(c);
			s.insert(c2);
		}
	}
	
	cout<<s.size()<<endl;
	for(auto x:s) cout<<x<<" ";
}
