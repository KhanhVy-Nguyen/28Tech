// Problem: [Xâu Ký Tự Cơ Bản]. Bài 16. Sắp xếp ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic16
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
    
	
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	for(auto x : s) cout<<x;
	
	cout<<"\n";
	sort(s.begin(), s.end(), greater<>());
	for(auto x : s) cout<<x;
}
