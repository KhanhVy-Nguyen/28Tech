// Problem: [Xâu Ký Tự]. Bài 52. Giải nén
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string52
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
	int i = 0, n = s.size();
	string res = "";
	
	while(i < n){
		char c = s[i];
		i++;
		
		string str_num = "";
		while(i < n && isdigit(s[i])){
			str_num += s[i];
			i++;
		}
		
		if(!str_num.empty()){
			ll times = stoll(str_num);
			res += string(times, c);
		}
	}
	
	
	cout<<res;
	
}
