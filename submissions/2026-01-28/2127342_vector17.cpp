// Problem: [Vector]. Bài 17. Số nhị phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

auto convert_number(ll n){
	vector<ll> result;
	for(int i=1; i<=64; i++){
		int a=n%2;
		result.push_back(a);
		n/=2;
	}
	reverse(result.begin(), result.end());
	return result;
}

int main(){
	int n; cin>>n;
	while(n--){
		ll a; cin>>a;
		auto result=convert_number(a);
		for(auto value:result) cout<<value;
		cout<<endl;
	}
}
