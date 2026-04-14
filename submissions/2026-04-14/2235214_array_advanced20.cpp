// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 20. Sliding window
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced20
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
    
	int n,k; cin >> n >> k;
	vector<int> v,res;
	for(int i = 0; i < n; i++){
		int value; cin >> value;
		v.push_back(value);
	}
	
	ll current_sum = 0, max_sum = 0,index = 0;
	for(int i = 0; i < k; i++){
		current_sum += v[i];
	}
	
	max_sum = current_sum;
	
	for(int i = k; i < n; i++){
		current_sum = current_sum + v[i] - v[i - k];
		if(current_sum > max_sum ){
			max_sum = current_sum;
			index = i - k + 1;
		}
	}
	cout<<max_sum<<"\n";
	int lim = index + k - 1;
	for(int i = index; i <= lim; i++){
		cout<<v[i]<<" ";
	}
	
}
