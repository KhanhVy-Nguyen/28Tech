// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 30. Mảng đánh dấu 5
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic30
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[1000005]={0};

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		mark[a[i]]++;
	}
	
	int max1=-1e9;
	int max2=-1;
	for(int i=0; i<n; i++){
		if(mark[a[i]]>max1){
			max1=mark[a[i]];
			max2=a[i];
		}
		
	}
	cout<<max2<<" "<<max1;
	
}
