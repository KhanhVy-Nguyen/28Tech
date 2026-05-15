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



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	vector<string> v;
	string w = "";
	w += s[0];
	int n = s.size();
	for(int i = 1; i < n; i++){
		if(s[i - 1] == s[i]){
			w += s[i];
		}
		else{
			v.push_back(w);
			w = s[i];
		}
	}
	v.push_back(w);
	
	sort(v.begin(), v.end(), [](string a, string b){
		if(a.size() != b.size()){
			return a.size() < b.size();
		}
		return a < b;
	});
	
	cout<<v[v.size() - 1];
}
