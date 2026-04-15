// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 29. Tổng nhỏ nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced29
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
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(), v.end());
	
	ll number1 = 0, number2 = 0;
	for(int i=0; i<n; i+=2){
		number1 = number1 * 10 + v[i];
	}
	for(int i=1; i<n; i+=2){
		number2 = number2 * 10 + v[i];
	}
	
	ll sum = number1 + number2;
	cout<<sum;
}
