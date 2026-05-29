// Problem: [Xâu Ký Tự]. Bài 50. Tích giai thừa các chữ số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string50
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	stringstream builder;
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == '4') builder << "223";
		else if(s[i] == '6') builder << "35";
		else if(s[i] == '8') builder << "2227";
		else if(s[i] == '9') builder << "2337";
		else if(s[i] - '0' > 1) {
			builder << s[i];
		}
	}
	
	string res = builder.str();
	sort(res.begin(), res.end(), greater<>());
	cout<<res;
}
