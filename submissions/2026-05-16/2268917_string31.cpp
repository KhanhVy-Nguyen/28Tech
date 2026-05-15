// Problem: [Xâu Ký Tự]. Bài 31. Tổng chữ số nguyên
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string31
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
    
	string s; cin>>s;
	ll total = 0;
	for(auto &x : s){
		total += x - '0';
	}
	
	cout<<total;
}
