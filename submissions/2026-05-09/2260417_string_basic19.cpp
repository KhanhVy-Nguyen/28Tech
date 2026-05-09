// Problem: [Xâu Ký Tự Cơ Bản]. Bài 19. Đếm số lượng tự khác nhau
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string_basic19
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
    
	
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	
	int cnt = 1;
	for(int i = 1; i < v.size(); i++){
		if(v[i].size() != v[i - 1].size()){
			cnt++;
		}
	} 
	cout<<cnt;
}
