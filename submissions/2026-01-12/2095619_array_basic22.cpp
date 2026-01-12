// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 22. Xóa phần tử
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic22
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
	int a[n+1];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int index=-1;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			index=i;
			break;
		}
	}
	if(index==-1) cout<<"NOT FOUND";
	else{
		n--;
		for(int i=index; i<n; i++){
			a[i]=a[i+1];
		}
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
	
	}
}
