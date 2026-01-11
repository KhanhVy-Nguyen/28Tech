// Problem: [Lý Thuyết Số – Toán Học]. Bài 50. Tam giác pascal bản dễ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math51
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
	ll a[105]={0};
	a[0]=1;
	for(int i=0; i<n; i++){
		for(int j=i; j>0; j--){
			a[j]=a[j]%mod + a[j-1]%mod;
			a[j]%=mod;
		}
		for(int j=0; j<=i; j++){
			cout<<a[j]<<" ";
		}
		cout<<endl<<endl;
	}
}
