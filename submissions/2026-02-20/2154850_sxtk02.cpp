// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 2. Sắp xếp theo trị tuyệt đối
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk02
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
	
	stable_sort(a.begin(), a.end(), [](int x, int y){
		return abs(x)<abs(y);
	});
	for(int x:a) cout<<x<<" ";
}
