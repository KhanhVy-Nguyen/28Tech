// Problem: [Xâu Ký Tự]. Bài 60. Xâu 28T
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string60
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

string make_key(int x, int y, int z){
	stringstream builder;
	builder << x << "+" << y << "+" << z;
	return builder.str();
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	map<string, int> prefix;
	int d2 = 0, d8 = 0, dt = 0;
	int sum = 0;
	prefix[make_key(0, 0, 0)] = 1;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '2') d2++;
		if(s[i] == '8') d8++;
		if(s[i] == 't') dt++;
		int x = d2 - d8, y = d2 - dt, z = d8 - dt;
		string key = make_key(x, y, z);
		sum = sum + prefix[key];
		prefix[key]++;
	}
	cout<<sum;
	return 0;
}
