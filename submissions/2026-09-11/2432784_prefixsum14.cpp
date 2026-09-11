// Problem: [Mảng Cộng Dồn – Mảng Hiệu]. Bài 14. Đoạn con có tổng bằng S
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/prefixsum14
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
    
    
    int n; cin >> n; ll s; cin >> s;
    vector<ll> v;
    for(int i = 0; i < n; i++){
    	int a; cin >> a;
    	v.push_back(a);    
    }
    
    map<ll, int> mp;
    mp[0] = 1;
    
    ll cur_sum = 0;
    int cnt = 0;
    
    for(auto x : v){
    	cur_sum += x;
    	ll target = cur_sum - s;
    	if(mp.find(target) != mp.end()){
    		cnt += mp[target];
    	}
    	mp[cur_sum]++;
    }
    
    cout << cnt ;
}
