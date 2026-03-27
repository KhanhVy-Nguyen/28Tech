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



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,m; cin>>n>>m;
	vector<int> a(n), b(m);
	for(int &x:a) cin>>x;
	for(int &x:b) cin>>x;
	
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			cout<<a[i++]<<" ";
		}
		else if(a[i] > b[j]){
			cout<<b[j++]<<" ";
		}else{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n) cout<<a[i++]<<" ";
	while(j<m) cout<<b[j++]<<" ";
	
	cout<<"\n";
	
	i=0; j=0;
	while(i<n && j<m){
		if(a[i] == b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if (a[i] < b[j]) i++;
		else j++;
	}
}
