// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 10. Tìm kiếm nhị phân biến đổi
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk10
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getFirstEqual(int a[], int l, int r, int x){
	int index = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m]==x){
			index = m;
			r=m-1;
		}
		else if(a[m]<x) l=m+1;
		else r=m-1;
	}
	return index;
}

int getLastEqual(int a[], int l, int r, int x){
	int index = -1;
	while(l<=r){
		int m =(l+r)/2;
		if(a[m]==x){
			index = m;
			l=m+1;
		}
		else if(a[m]<x) l=m+1;
		else r=m-1;
	}
	return index;
}
int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	//1
	int p1 = getFirstEqual(a,0,n-1,x);
	cout<<p1<<endl;
	
	//2
	int p2 = getLastEqual(a, 0, n-1,x);
	cout<<p2<<endl;
	
	//3
	auto *p3=lower_bound(a,a+n,x);
	if(p3==a+n) cout<<-1<<endl;
	else cout<<p3-a<<endl;
	
	//4
	auto *p4 = upper_bound(a,a+n,x);
	if(p4==a+n) cout<<-1<<endl;
	else cout<<p4-a<<endl;
	
	//5
	if(p3==n+a || *p3!=x) cout<<0<<endl;
	else cout<<p4-p3<<endl;
}
