// Problem: [Comparator Lower_bound Upper_bound]. Bài 11. First position
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator11
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int *p = lower_bound(a, a+n, x);
	if(*p==x){
		cout<<p-a<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
