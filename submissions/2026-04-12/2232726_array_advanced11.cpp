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
const ll mod = 1e9+7;

// key 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin>>n>>m;
    vector<int> a,b;
    for(int i=0; i<n; i++){
    	int value; cin>>value;
    	a.push_back(value);
    }
    
     for(int i=0; i<m; i++){
    	int value; cin>>value;
    	b.push_back(value);
    }
	
	vector<int> h,g;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] < b[j]){
			h.push_back(a[i]);
			i++;
		}
		else if(a[i] > b[j]){
			h.push_back(b[j]);
			j++;
		}
		else{
			g.push_back(a[i]);
			h.push_back(a[i]);
			i++;
			j++;
		}
	}
	
	while(i < n){
		h.push_back(a[i]); 
		i++;
	}
	while(j < m){
		h.push_back(b[j]);
		j++;
	}
	
	for(int x : h){
		cout<<x<<" ";
	}
	cout<<"\n";
	
	for(int x : g){
		cout<<x<<" ";
	}
}
