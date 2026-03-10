// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 20. Điền số còn thiếu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk20
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
	for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a.begin(),a.end());
	int b=a.size();
	int res = a[n-1] - a[0] - b +1;
	cout<<res;
}
