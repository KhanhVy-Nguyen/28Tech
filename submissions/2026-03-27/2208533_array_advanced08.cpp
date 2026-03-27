// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 8. Trộn 2 dãy đã sắp xếp
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced08
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
	vector<int> a(n);
	vector<int> b(m);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] <= b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else{
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<b[j]<<" ";
		j++;
	}
}
