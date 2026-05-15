// Problem: [Xâu Ký Tự]. Bài 20. Xâu Python
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/string20
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
    
	string s; cin>>s;
	string sam = "python";
	
	int i = 0, j = 0;
	int n = s.size(), m = 6;
	while(i < n && j < m){
		if(s[i] != sam[j]){
			i++;
			
		}
		else{
			i++;
			j++;
			
		}
		
		if(j == 6) break;
		
	}
	
	if(j == 6){
		cout<<"YES";
	}
	else cout<<"NO";
}
