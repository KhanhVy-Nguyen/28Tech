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
	int max_length = 1, current_length = 1;
	int index = 0;
	string result = "";
	for(int i = 0 ; i < s.length(); i++){
		if(s[i] != s[i + 1]){
			if(current_length > max_length){
				max_length = current_length;
				result = s.substr(index, max_length);
			}
			else if(current_length == max_length){
				string tmp = s.substr(index, max_length);
				result = max(result, tmp);
			}
			current_length = 1;
			index = i + 1;
		}
		else{
			current_length++;
		}
	}
	
	cout<<result;
}
