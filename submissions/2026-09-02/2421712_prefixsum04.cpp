// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 4. Mảng hiệu
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum04
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
    
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	
	
	vector<int> diff(n, 0);
	diff[0] = v[0];
	for(int i = 1; i < n; i++){
		diff[i] = v[i] - v[i - 1];
	}
	
	for(int x : diff){
		cout<<x<<" ";
	}
}
