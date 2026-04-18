// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 40. Mảng con
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced40
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
    
	int n,m; cin>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	
	int index = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == b[index]){
			index++;
		}
		if(index == m){
			break;
		}
	}
	
	if(index == m) cout<<"YES";
	else cout<<"NO";
}
