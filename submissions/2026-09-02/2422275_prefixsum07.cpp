// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 7. Pha trà sữa
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

const int max_num = 200000;

int diff[max_num + 5];
int prefix[max_num + 5];
int sugar[max_num + 5];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n, k, q; cin >> n >> k >> q;
	for(int i = 0; i < n; i++){
		int l, r; cin >> l >> r;
		diff[l] += 1;
		diff[r + 1] -= 1;
	}
	
	for(int i = 1; i < max_num; i++){
		sugar[i] = sugar[i - 1] + diff[i];
		
		int is_valid = (sugar[i] >= k)? 1 : 0;
		
		prefix[i] = prefix[i - 1] + is_valid;
	}
	
	while(q--){
		int l, r; cin >> l >> r;
		cout << prefix[r] - prefix[l - 1] <<endl;
	}
}
