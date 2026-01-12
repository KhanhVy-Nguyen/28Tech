// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 18. Liền kề trái dấu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic18
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
	int a[n];
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=1; i<n; i++){
		if(a[i]*a[i-1]<0 || a[i]*a[i+1]<0){
			v.push_back(a[i]);
		}
	}
	for(auto i:v) cout<<i<<" ";
}
