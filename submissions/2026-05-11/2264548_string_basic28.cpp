// Problem: [Xâu Ký Tự Cơ Bản]. Bài 28. So sánh 2 số nguyên lớn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic28
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
    
	
	string n, m; cin>>n>>m;
	if(n.size() > m.size()) cout<<"28tech";
	else if(n.size() < m.size()) cout<<"29tech";
	else{
		if(n == m) cout<<"30tech";
		else if(n > m) cout<<"28tech";
		else cout<<"29tech";
	}
	
}
