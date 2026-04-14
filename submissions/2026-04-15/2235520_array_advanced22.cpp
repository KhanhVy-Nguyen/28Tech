// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 22. Số bị lặp lại đầu tiên
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced22
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
    
	int n; cin>>n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int value; cin >> value;
		auto it = find(v.begin(), v.end(), value);
		if(it != v.end()){
			cout << *it;
			return 0;
		}
		v.push_back(value);
	}
	cout << -1;
	return 0;
	
}
