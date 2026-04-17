// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 35. Count maximum subset
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced35
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
    
	int n,k; cin>>n>>k;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	
	int left = 0, max_length = 0;
	for(int right = 0; right < n; right++){
		while(v[right] - v[left] > k){
			left++;
		}
		max_length = max(max_length, right - left + 1);
	}
	cout<<max_length;
	
}
