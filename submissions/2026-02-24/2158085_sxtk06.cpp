// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 6. Sắp xếp chọn – Selection sort
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk06
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
		int min_pos=i;
		cout<<"Buoc "<<i+1<<": ";
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		int tmp=a[i];
		a[i]=a[min_pos];
		a[min_pos]=tmp;
		
		for(int x:a) cout<<x<<" ";
		cout<<endl;
	}
}
