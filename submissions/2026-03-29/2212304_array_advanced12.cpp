// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 12. Đếm tần suất nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced12
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



bool isPrime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v;
    map<int,int> mp;
    unordered_set<int> s;
    int x;
	while(cin>>x){
		if(isPrime(x)){
			v.push_back(x);
			mp[x]++;
			
		}
	}
	for(int value:v){
		if(s.find(value) == s.end()){
			cout<<value<<" "<<mp[value]<<"\n";
			s.insert(value);
		}
	}
	
}
