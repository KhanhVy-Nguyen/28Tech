// Problem: [Vector]. Bài 19. Nguyên tố & không nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector19
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPrime(int n){
	if(n < 2) return false;
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0) return false;
		}
		return true;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector<int> prime;
	vector<int> rest;
	int n; 
	while(cin >> n){
		(isPrime(n))? prime.push_back(n) : rest.push_back(n);
	}
	
	for(auto it = prime.rbegin(); it != prime.rend(); it++) cout<<*it<<" ";
	cout<<endl;
	for(auto x : rest) cout<<x << " ";
}
