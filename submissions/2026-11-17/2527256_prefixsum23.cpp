// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 23. Xe buýt
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum23
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
    
	int c, n, m; cin >> c >> n >> m;
	vector<ll> diff(m + 2, 0);
	for(int i = 1; i <= n; i++){
		int p, start, end; cin >> p >> start >> end;
		
		diff[start]+= p;
		diff[end]-= p;
	}
	
	
	vector<ll> prefix(m + 2, 0);
	for(int i = 1; i <= m; i++){
		prefix[i] = prefix[i - 1] + diff[i];
		
		if(prefix[i] > c){
			cout << "29tech";
			cout << "\n";
			cout << i;
			
			return 0;
		}
	}
	
	cout << "28tech";
	
	
}