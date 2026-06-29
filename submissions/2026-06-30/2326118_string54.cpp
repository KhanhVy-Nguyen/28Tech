// Problem: [Xâu Ký Tự]. Bài 54. Anagram
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string54
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isAnagram(string s1, string s2){
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	
	return s1 == s2;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string line; 
		getline(cin, line);
		
		int mid = line.find_first_of(" ");
		
		string w1 = line.substr(0, mid);
		string w2 = line.substr(mid + 1);
		
		cout<<(isAnagram(w1, w2)? "YES\n" : "NO\n");
	}
}
