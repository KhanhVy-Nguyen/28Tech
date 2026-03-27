// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 6. Đếm cặp số nguyên tố cùng nhau
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced06
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int cnt = 0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(gcd(a[i], a[j]) == 1) cnt++;
		}
	}
	
	cout<<cnt;
}
