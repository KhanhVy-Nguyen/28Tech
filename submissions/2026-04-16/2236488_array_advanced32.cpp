// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 32. Maximum window
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced32
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,k; cin>>n>>k;
	multiset<int> ms;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	for(int i = 0; i < k; i++){
		ms.insert(v[i]);
	}
	cout<<*(ms.begin())<<" "<<*(ms.rbegin())<<"\n";
	
	for(int i = k; i < n; i++){
		ms.insert(v[i]);
		ms.erase(ms.find(v[i - k]));
		cout<<*(ms.begin())<<" "<<*(ms.rbegin())<<"\n";
	}
}
