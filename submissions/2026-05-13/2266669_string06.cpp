// Problem: [Xâu Ký Tự]. Bài 6. Ký tự xuất hiện ở cả 2 xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string06
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
    
	string a, b; cin>>a>>b;
	set<char> a1(a.begin(), a.end());
	set<char> b1(b.begin(), b.end());
	
	string a_res, b_res;
	
	set_difference(a1.begin(), a1.end(), b1.begin(), b1.end(), back_inserter(a_res));
	set_difference(b1.begin(), b1.end(), a1.begin(), a1.end(), back_inserter(b_res));
	
	for(auto x : a_res) cout<<x;
	cout<<"\n";
	for(auto x : b_res) cout<<x;
}
