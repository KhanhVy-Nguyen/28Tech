// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 37. Cửa hàng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk37
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
	vector<int> c(n);
	vector<int> l(n);
	for(int i=0; i<n; i++){
		cin>>c[i]>>l[i];
	}
	sort(c.begin(), c.end());
	sort(l.begin(), l.end());
	
	int i=0, j=0, current=0, max_value=0;
	while(i < n && j < n){
		if(c[i] <= l[j]){
			current++;
			max_value = max(max_value, current);
			i++;
		}
		else{
			current--;
			j++;
		}
	}
	cout<<max_value;
}
