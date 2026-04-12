// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 17. Truy vấn tổng trên đoạn
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced17
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//anh Binh

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n; cin>>n;
	int q; cin>>q;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	vector<int> prefix(n);
	prefix[0] = v[0];
	for(int i=1; i<n; i++){
		prefix[i] = prefix[i-1] + v[i];
	}
	
	for(int i=1; i<=q; i++){
		int left, right; cin>>left>>right;
		left--; right--;
		if(left == 0){
			cout<<prefix[right]<<"\n";
		}
		else{
			cout<<prefix[right] - prefix[left - 1]<<"\n";
		}
	}
	
}
