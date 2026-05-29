// Problem: [Xâu Ký Tự]. Bài 49. Số may mắn 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string49
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
	
	auto it = s.find("111");
	while(it != string::npos){
		s.erase(it,3);
		it = s.find("111");
	}
	cout<<(s.empty()?"EMPTY" : s);
}
