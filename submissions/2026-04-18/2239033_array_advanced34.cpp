// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 37. Dãy con dài nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced37
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
	for(int i=0; i<n; i++) cin>>v[i];
	
	map<ll,ll> prefix;
	prefix[0] = -1;
	ll  current_prefix = 0, max_length = LONG_MIN;
	for(int i=0; i<n; i++){
		current_prefix = (current_prefix + v[i]);
		int x = (current_prefix % k + k) % k;
		
		if(prefix.find(x) != prefix.end()){
			ll length = i - prefix[x];
			max_length = max(length, max_length);
			
		}
		else{
			prefix[x] = i;
		}
	}
	
	if(max_length == LONG_MIN){
		cout<<-1<<"\n";
	}
	else{
		cout<<max_length;
	}
}
