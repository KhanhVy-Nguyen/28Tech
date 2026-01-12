// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 28. Mảng đánh dấu 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic28
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[1000001]={0};

int main(){
	int n ;cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		mark[a[i]]++;
	}
	
	for(int s:a){
		if(mark[s]!=0){
			cout<<s<<" "<<mark[s]<<"\n";
			mark[s]=0;
		}
	}
}
