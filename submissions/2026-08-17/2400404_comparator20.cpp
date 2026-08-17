// Problem: [Comparator Lower_bound Upper_bound]. Bài 20. Sắp xếp từ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator20
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
	vector<string> v;
	for(int i = 0; i < n; i++){
		string s; cin>>s;
		v.push_back(s);
	}
	
	sort(v.begin(), v.end());
	for(auto x: v) cout<<x << " ";
	cout<<endl;
	
	sort(v.begin(), v.end(), greater<string>());
	for(auto x : v) cout << x<< " ";
}
