// Problem: [Set & Map]. Bài 2. Truy vấn phần tử
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap02
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
	sort(a, a+n);
	
	int q; cin>>q;
	while(q--){
		int x; cin>>x;
		if(binary_search(a, a+n, x)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
