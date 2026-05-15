// Problem: [Xâu Ký Tự]. Bài 23. Ghép xâu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string23
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
	vector<string> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	
	sort(v.begin(), v.end(), [](string a, string b){
		return a + b > b + a;
	});
	
	for(auto x : v) cout<<x;
}
