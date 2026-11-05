// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 42. Mảng con có tổng bằng X 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk42
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//k

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
    ll x; cin >> n >> x;
    vector<ll> v;
    map<ll, ll> mp;
    
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        v.push_back(a);
    }
    
    vector<ll> prefix(n, 0);
    prefix[0] = v[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + v[i];
    }
    
    mp[0] = 1;
    ll ans = 0;
    
    for(int i = 0; i < n; i++){
        ans += mp[prefix[i] - x];
        mp[prefix[i]]++;
    }
    
    cout << ans;
   
}