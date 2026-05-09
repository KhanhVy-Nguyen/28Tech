// Problem: [Xâu Ký Tự Cơ Bản]. Bài 23. Kiểm tra xâu đối xứng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic23
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPalindrome(string s){
	for(int i = 0; i <= s.size() / 2; i++){
		if(s[i] != s[s.size() - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s; cin>>s;
	cout<<boolalpha<<isPalindrome(s)<<endl;
}
