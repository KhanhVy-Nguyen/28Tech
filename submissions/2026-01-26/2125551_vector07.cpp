// Problem: [Vector]. Bài 7. Vector và pair
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector07
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
	double distance=0;
	vector<pair<int,int>> result;
	
	for(int i=0; i<n; i++){
		double a1,a2; cin>>a1>>a2;
		distance = sqrt(a1*a1 + a2*a2);
		cout<<fixed<<setprecision(2)<<distance<<" ";
	}	
	
	
	
	
}
