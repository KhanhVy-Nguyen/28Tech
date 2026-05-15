// Problem: [Xâu Ký Tự]. Bài 14. Từ xuất hiện nhiều nhất, ít nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string14
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
	for(auto &x : s){
		if(!isalpha(x) && !isdigit(x)){
			x = ' ';
		}
	}
	
	
	stringstream ss(s);
	string w;
	map<string, int> mp;
	string max_word;
	string min_word;

	int max_fre = 0;
	int min_fre = INT_MAX;
	while(ss >> w){
		mp[w]++;
		max_fre = max(max_fre, mp[w]);
		min_fre = min(min_fre, mp[w]);
	}
	
	for(auto x : mp){
		if(x.second >= max_fre){
			max_fre = x.second;
			max_word = x.first;
		}
		
		if(x.second <= min_fre){
			min_fre = x.second;
			min_word = x.first;
		}
	}
	
	
	cout<<max_word<<" "<<max_fre<<"\n";
	cout<<min_word<<" "<<min_fre;
}
