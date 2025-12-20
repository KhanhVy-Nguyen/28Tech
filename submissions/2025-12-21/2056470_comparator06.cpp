// Problem: [Comparator Lower_bound Upper_bound]. Bài 6. Sắp xếp lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator06
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int odd(int a){
	int cnt=0;
	while(a>0){
		int one=a%10;
		if(one%2!=0) cnt++;
		a/=10;
	}
	return cnt;
}

bool order(int x,int y){
	if(odd(x)!=odd(y)) return odd(x)>odd(y);
	else return x<y;
}

int main(){
	int n; cin>>n; 
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a,a+n,order);
	for(int i:a) cout<<i<<" ";
	
}
