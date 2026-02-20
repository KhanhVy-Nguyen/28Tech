// Problem: [Comparator Lower_bound Upper_bound]. Bài 7. Sắp xếp 0, 6, 8
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int get068(int n){
	int cnt=0;
	while(n>0){
		int digit=n%10;
		if(digit==0 || digit==6 || digit ==8) cnt++;
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
	
	sort(a.begin(),a.end(),[](int x, int y){
		if(get068(x) != get068(y)){
			return get068(x) > get068(y);
		}
		return x<y;
	});
	
	for(int x:a) cout<<x<<" ";
}
