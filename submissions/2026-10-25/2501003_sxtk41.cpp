// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 41. Mảng con có tổng bằng X 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk41
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
    
	int n, x; cin >> n >> x;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back(a);
	}
	
	int l = 0, cnt = 0;
	ll sum = 0;
	for(int r = 0; r < n; r++){
		sum += v[r];
		
		while(sum > x){
			sum -= v[l];
			l++;
		}
		
		if(sum == x){
			cnt++;
		}
	}
	
	cout << cnt;
	
}