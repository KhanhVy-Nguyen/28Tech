// Problem: [Xâu Ký Tự]. Bài 26. Xâu con liên tiếp 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string26
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
	regex pattern(R"((.)\1*)");
	
	sregex_iterator begin(s.begin(), s.end(), pattern);
	sregex_iterator end;
	string result = "";
	
	for(auto it = begin; it != end; it++){
		string match = it->str();
		if(match.length() > result.length()){
			result = match;
		}
		else if(match.length() == result.length()){
			result = max(match, result);
		}
	}
	
	cout<<result;
}
