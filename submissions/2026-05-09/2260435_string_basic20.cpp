// Problem: [Xâu Ký Tự Cơ Bản]. Bài 20. Các từ thuận nghịch
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic20
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isSymmetricalWord(string word){
	for(int i = 0; i <= (int)word.size() / 2; i++){
		if(word[i] != word[word.size() - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		if(isSymmetricalWord(word)){
			v.push_back(word);
		}
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		cout<<x<<" ";
	}
}
