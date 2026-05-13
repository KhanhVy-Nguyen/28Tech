// Problem: [Xâu Ký Tự]. Bài 7. Xâu đối xứng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string07
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
	int len = s.size(); 
	for(int i = 0; i < len; i++){
		if(s[i] != s[len - 1 - i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
