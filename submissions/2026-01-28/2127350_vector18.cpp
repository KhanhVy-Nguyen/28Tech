// Problem: [Vector]. Bài 18. Hệ thập lục phân
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

auto convert_number(ll n){
	vector<char> result;
	while(n!=0){
		ll remain=n%16;
		if(remain==10) result.push_back('a');
		else if(remain==11) result.push_back('b');
		else if(remain==12) result.push_back('c');
		else if(remain==13) result.push_back('d');
		else if(remain==14) result.push_back('e');
		else if(remain==15) result.push_back('f');
		else{
			result.push_back(remain + '0');
		}
		n/=16;
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
