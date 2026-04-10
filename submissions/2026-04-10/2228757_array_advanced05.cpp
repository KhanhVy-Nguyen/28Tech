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
		int mini = min(abs(v[i] - v[i-1]), abs(v[i] - v[i+1]));
		int maxi = max(abs(v[i] - v[0]), abs(v[i] - v[n-1]));
		if(i == 0){
			cout<<abs(v[i] - v[i+1])<<" "<<abs(v[i] - v[n-1])<<"\n";
		}
		else if(i == n-1){
			cout<<abs(v[i] - v[i-1])<<" "<<abs(v[i] - v[0])<<"\n";
		}
		else{
			cout<<mini<<" "<<maxi<<"\n";
		}
	}
}
