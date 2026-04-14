// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 23. Trộn 2 dãy đã sắp xếp
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced23
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
	vector<int> a,b; 
	for(int i = 0; i < n; i++){
		int value ; cin>>value;
		a.push_back(value);
	}
	sort(a.begin(), a.end());
	
	for(int i=0; i<n; i++){
		int value; cin>>value;
		b.push_back(value);
	}
	sort(b.begin(), b.end(), greater<int>());
	
	for(int i=0; i < n*2; i+=2){
		cout<<a[i/2]<<" "<<b[i/2]<<" ";
	}
}
