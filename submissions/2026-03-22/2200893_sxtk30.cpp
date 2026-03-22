// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 30. Đèn lồng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk30
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	double n, l; cin>>n>>l;
	vector<int> v;
	for(int i=0; i<n; i++){
		double value; cin>>value;
		v.push_back(value);
	}
	
	double distance = INT_MIN;
	double res=0;
	sort(v.begin(), v.end());
	for(int i=1; i<n; i++){
		res = max(distance, (v[i] - v[i-1]) / 2.0);
		distance = (v[i] - v[i-1]) /2.0;
	}
	
	double first = v[0];
	double last = l - v[n-1];
	
	double d = max(first, max(last, res));
	cout<<fixed<<setprecision(10)<<d;
}
