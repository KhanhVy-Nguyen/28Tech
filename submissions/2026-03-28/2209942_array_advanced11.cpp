// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 11. Tìm hợp và giao 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced11
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const int mod = 1e7+7;

bool mark1[mod], mark2[mod];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l=INT_MAX, r=INT_MIN;
	int n,m; cin>>n>>m;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		mark1[value] = true;
		if(value < l) l=value;
		if(value > r) r=value;
	}
	for(int i=0; i<m; i++){
		int value; cin>>value;
		mark2[value] = true;
		if(value < l) l=value;
		if(value > r) r=value;
	}
	
	for(int i=l; i<=r; i++){
		if(mark1[i] || mark2[i]){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	
	for(int i=l; i<=r; i++){
		if(mark1[i] && mark2[i]){
			cout<<i<<" ";
		}
	}
}
