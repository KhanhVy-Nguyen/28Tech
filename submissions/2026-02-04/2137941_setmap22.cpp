// Problem: [Set & Map]. Bài 22. Số lần xuất hiện
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap22
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
	multiset<int> ms;
	vector<int> v;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		ms.insert(a);
		int cnt=ms.count(a);
		cout<<cnt<<" ";
	}
	
}
