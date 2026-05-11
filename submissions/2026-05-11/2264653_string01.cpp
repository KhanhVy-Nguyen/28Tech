// Problem: [Xâu Ký Tự]. Bài 1. Đếm số loại ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string01
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
    
	
	string s; getline(cin, s);
	int num_cnt = 0, alpha_cnt = 0, spec_cnt = 0;
	for(auto x : s){
		if(isdigit(x)) num_cnt++;
		else if(isalpha(x)) alpha_cnt++;
		else spec_cnt++;
	}
	
	cout<<alpha_cnt<<" "<<num_cnt<<" "<<spec_cnt;
}
