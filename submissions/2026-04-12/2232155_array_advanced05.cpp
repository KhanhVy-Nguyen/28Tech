// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 5. Gửi thư
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced05
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
	
	for(int i=0; i<n; i++){
		if(i == 0){
			cout<<v[i+1] - v[i]<<" "<<v.back() - v[i]<<"\n";
		}
		else if(i == n-1){
			cout<<v[i] - v[i-1]<<" "<<v[i] - v.front()<<"\n";
		}
		else{
			int min_value = min(v[i+1] - v[i], v[i] - v[i-1]);
			int max_value = max(v.back() - v[i], v[i] - v.front());
			cout<<min_value<<" "<<max_value<<"\n";
		}
	}
}
