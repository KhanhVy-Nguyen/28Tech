// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 26. Mảng đánh dấu 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[10003];

int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		mark[a]=1;
	}
	int cnt=0;
	for(int i:mark){
		if(i==1) cnt++;
	}
	cout<<cnt;
}
