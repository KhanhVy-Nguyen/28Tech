// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 16. Định lý Pytago
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced16
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
	vector<ll> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i < n; i++){
		v[i] = v[i] * v[i];
	}
	
	for(int k = n - 1; k >= 2; k--){
		int i=0, j=k-1;
		int c = v[k];
		while(i < j){
			int a = v[i], b = v[j];
			if(a + b == c){
				cout<<"YES";
				return 0;
			}
			else if(a + b > c){
				j--;
			}
			else{
				i++;
			}
		}
	}
	cout<<"NO";
	return 0;
}
