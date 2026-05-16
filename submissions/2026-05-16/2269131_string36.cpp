// Problem: [Xâu Ký Tự]. Bài 36. Số chia hết cho 4
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string36
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isDivisible(string s){
	int n = s.size();
	if(n == 1){
		int digit = stoi(s);
		if(digit % 4 != 0) return false;
	}
	else{
		string tmp = "";
		tmp = tmp + s[n - 2] + s[n - 1];
		int digits = stoi(tmp);
		if(digits % 4 != 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	if(isDivisible(s)) cout<<"YES";
	else cout<<"NO";
}
