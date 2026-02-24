// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 8. Sắp xếp nổi bọt
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk08
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
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++){
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		
		for(int x:a) cout<<x<<" ";
		cout<<endl;
	}
}
