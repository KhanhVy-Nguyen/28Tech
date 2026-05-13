// Problem: [Xâu Ký Tự]. Bài 5. Ký tự xuất hiện ở cả 2 xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string05
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
	
	set<char> s1(a.begin(), a.end());
	set<char> s2(b.begin(), b.end());
	
	string inter_res;
	string uni_res;
	
	set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(inter_res));
	set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(uni_res));
	
	for(auto x : inter_res) cout<<x;
	cout<<"\n";
	for(auto x : uni_res) cout<<x;
	
	
}
