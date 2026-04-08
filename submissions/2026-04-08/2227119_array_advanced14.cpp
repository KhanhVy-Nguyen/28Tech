// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 14. Liệt kê và đếm
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced14
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isNonDecreasing(int n){
	int last = n % 10;
	n /= 10;
	
	while(n > 0){
		int second_to_last = n % 10;
		n /= 10;
		if(last < second_to_last) return false;
		last = second_to_last;
		
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector<int> v;
	map<int,int> mp;
	int n;
	while(cin >> n){
		if(isNonDecreasing(n)){
			v.push_back(n);
			mp[n]++;
		}
	}
	
	sort(v.begin(), v.end(), [&](int& a, int& b){
		if(mp[a] != mp[b]) return mp[a] > mp[b];
		return a < b;
	});
	
	for(int x : v){
		if(mp[x] != 0){
			cout << x <<" "<<mp[x]<<"\n";
			mp[x] = 0;
		}
	}
}
