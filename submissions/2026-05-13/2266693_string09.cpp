// Problem: [Xâu Ký Tự]. Bài 9. Đếm số lượng từ trong xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string09
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
	for(auto x : s){
		if(!isalpha(x)){
			x = ' ';
		}
	}
	
	stringstream ss(s);
	string w;
	int cnt = 0;
	while(ss >> w) cnt++;
	cout<<cnt;
}
