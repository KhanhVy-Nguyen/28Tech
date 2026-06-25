// Problem: [Xâu Ký Tự]. Bài 51. Nén xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string51
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
	
	int cnt = 1;
	string res = "";
	
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]){
			cnt++;
		}
		else{
			res += s[i - 1];
			res += (char)(cnt + '0');
			cnt = 1;
		}
	}
	res += s.back();
	res += to_string(cnt);
	
	cout<<res;
}
