// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 41. Gộp mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced41
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	multiset<ll> ms;
	for(int i=0; i<n; i++) {
		int value; cin>>value;
		ms.insert(value);
	}
	
	ll total_cost = 0;
	while(ms.size() > 1){
		ll sum = 0;
		
		auto it_one = ms.begin();
		ll value_one = *it_one;
		ms.erase(it_one);
		
		auto it_two = ms.begin();
		ll value_two = *it_two;
		ms.erase(it_two);
		
		sum = value_one + value_two;
		
		total_cost += sum;
		
		ms.insert(sum);
		 
	}
	cout<<total_cost<<" "<<*(ms.begin())<<"\n";
	
}
