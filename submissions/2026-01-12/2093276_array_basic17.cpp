// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 17. Mảng đối xứng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool symmetrical_array(int a[], int n){
	for(int i=0; i<n/2; i++){
		if(a[i]!=a[n-i-1]) return false;
	}
	return true;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	if(symmetrical_array(a,n)) cout<<"YES";
	else cout<<"NO";
}
