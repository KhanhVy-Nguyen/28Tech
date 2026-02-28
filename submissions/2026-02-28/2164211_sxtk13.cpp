// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 13. Xếp gạch
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk13
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a.begin(), a.end(), greater<int>());
	
	int cnt = 1;
	int max_length= a[0];
	for(int i=1;i<n;i++){
		if(max_length<1){
			break;
		}
		else{
			cnt++;
			max_length=min(max_length-1,a[i]);
		}
	}
	cout<<cnt;
}
