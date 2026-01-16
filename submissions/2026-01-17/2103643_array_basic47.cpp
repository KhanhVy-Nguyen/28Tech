// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 49. 28tech
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic49
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


int main(){
	int n; cin>>n;
	char a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	string tech28="28tech";
	unsigned long long j=0;
	for(int i=0; i<n; i+=2){
		if(a[i]==tech28[j]){
			j++;
		}
		if(j==tech28.size()) break;
	}
	
	if(j==tech28.size()) cout<<"28TECH";
	else cout<<"HCET82";
}
