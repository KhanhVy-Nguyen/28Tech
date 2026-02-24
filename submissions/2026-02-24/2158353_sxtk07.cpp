// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 7. Sắp xếp chèn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

void insertionSort(int a[], int n){
	for(int i=1; i<n; i++){
		int pos=i-1, value=a[i];
		while(pos>=0 && value<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=value;
	}
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	
	for(int i=1; i<n; i++){
		int pos=i-1, value=a[i];
		while(pos>=0 && value<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=value;
		
		cout<<"Buoc "<<i<<": ";
		for(int x:a) cout<<x<<" ";
		cout<<endl;
	}
}
