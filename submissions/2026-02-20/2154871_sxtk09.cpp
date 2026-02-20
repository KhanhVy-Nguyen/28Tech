// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 9. Tìm kiếm nhị phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk09
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
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int q; cin>>q;
	sort(a.begin(),a.end());
	while(q--){
		int x; cin>>x;
		if(binary_search(a.begin(), a.end(), x)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
}
