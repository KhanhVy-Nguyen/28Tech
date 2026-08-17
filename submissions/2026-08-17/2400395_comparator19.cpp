// Problem: [Comparator Lower_bound Upper_bound]. Bài 19. Sắp xếp ký tự
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator19
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
	vector<char> v;
	for(int i =0; i < n; i++){
		char c; cin>> c;
		v.push_back(c);
	}
	
	sort(v.begin(), v.end());
	for(auto x : v) cout << x << " ";
	cout<<endl;
	
	sort(v.begin(), v.end(), greater<char>());
	for(auto x : v) cout << x << " ";
	cout<<endl;
}
