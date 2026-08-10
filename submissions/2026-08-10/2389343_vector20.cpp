// Problem: [Vector]. Bài 20. Nguyên âm
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector20
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
    
	int n; cin>>n;
	vector<pair<char, int>> v;
	while(n--){
		char c; int a;
		cin >> c >> a;
		if(c == 'o' || c == 'a' || c == 'i' || c == 'u' || c == 'e'){
			v.emplace_back(c, a);
		}	
	}
	if(v.size() == 0){
		cout<<"28tech";
		return 0;
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout<<v[i].first << " " << v[i].second << endl;
	}
}
