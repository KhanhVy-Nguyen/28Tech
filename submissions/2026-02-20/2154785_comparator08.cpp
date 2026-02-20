// Problem: [Comparator Lower_bound Upper_bound]. Bài 8. Sắp xếp chữ số nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator08
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getPrimeDigit(int n){
	int cnt=0;
	while(n>0){
		int digit=n%10;
		if(digit==2 || digit==3 || digit==5 || digit==7) cnt++;
		n/=10;
	}
	return cnt;
}

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	stable_sort(a.begin(), a.end(), [](int x, int y){
		return getPrimeDigit(x) > getPrimeDigit(y);
	});
	for(int x:a) cout<<x<<" ";
}
