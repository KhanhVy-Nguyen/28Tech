// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 39. Longest zero sum subarray
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced39
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
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	map<int,int> mp;
	ll current_prefix = 0;
	int index = -1, max_length = 0;
	for(int i=0; i<n; i++){
		current_prefix += v[i];
		if(current_prefix == 0){
			max_length = max(max_length, i+1);
			index = i;
		}
		else if(mp.find(current_prefix) != mp.end()){
			int length = i - mp[current_prefix];
			if(length > max_length){
				max_length = length;
				index = i;
			}
		}
		else{
			mp[current_prefix] = i;
		}
	}
	
	if(max_length == 0){
		cout<<"NOT FOUND";
	}
	else{
		for(int i = index - max_length + 1; i <= index; i++){
			cout<<v[i]<<" ";
		}
	}
}
