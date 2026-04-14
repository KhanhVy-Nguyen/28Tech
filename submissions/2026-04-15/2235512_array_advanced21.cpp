// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 21. Dãy ưu thế
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced21
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
    
	int n;
	vector<int> v;
	int even = 0, odd = 0;
	while(cin>>n){
		v.push_back(n);
		if(n % 2 == 0) even++;
		else odd++;
	}
	
	if(v.size() % 2 == 0 && even > odd){
		cout<<"YES";
	}
	else if(v.size() % 2 != 0 && even < odd){
		cout<<"YES";
	}
	else cout<<"NO";
}
