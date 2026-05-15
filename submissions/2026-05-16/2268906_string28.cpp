// Problem: [Xâu Ký Tự]. Bài 28. Số lớn nhất trong xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string28
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

string dezero(string s) {
    int i = 0;
    while (i < s.size() - 1 && s[i] == '0') {
        i++;
    }
    return s.substr(i);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	for(auto &x : s){
		if(!isdigit(x)){
			x = ' ';
		}
	}
	
	vector<string> v;
	stringstream ss(s);
	string w;
	while(ss >> w){
		w = dezero(w);
		v.push_back(w);
	}
	
	sort(v.begin(), v.end(), [](string a, string b){
		if(a.size() != b.size()){
			return a.size() < b.size();
		}
		return a < b;
	});
	
	cout<<v[v.size() - 1];
}
