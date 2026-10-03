// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 21. Đặt phòng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum21
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
    
	int d, n; cin >> d >> n;
	vector<ll> diff(d + 2, 0);
	
	for(int i = 1; i <= n; i++){
		ll a, b; cin >> a >> b;
		diff[a]++;
		diff[b + 1]--;
	}
	
	
	
	ll max_quantity = -1;
	int first_day = 1;
	ll cur_quantity = 0;
	
	for(int i = 1; i <= d; i++){
		cur_quantity += diff[i];
		
		if(cur_quantity > max_quantity){
			max_quantity = cur_quantity;
			first_day = i;
		}
	}
	
	cout << max_quantity << " " << first_day;
}
