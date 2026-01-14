// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 40. Số lần xuất hiện của chữ số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic40
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[1000005];

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		a[i]=abs(a[i]);
		while(a[i]>0){
			int one=a[i]%10;
			mark[one]++;
			a[i]/=10;
		}
	}
	for(int i=0; i<10; i++){
		cout<<i<<" "<<mark[i]<<endl;
	}
	
	
	
	
}
