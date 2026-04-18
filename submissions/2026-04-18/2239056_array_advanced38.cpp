// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 38. Prime in range
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced38
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

const int maxN = 1000001;
vector<bool> isPrime(maxN, true);
vector<int> prefix(maxN, 0);
void sieve(){
	isPrime[0] = isPrime[1] = false;
	for(int i=2; i*i<=maxN; i++){
		if(isPrime[i] == true){
			for(int j = i*i; j<maxN; j+=i){
				isPrime[j] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int q; cin>>q;
	sieve();
	for(int i=1; i<maxN; i++){
		if(isPrime[i]){
			prefix[i] = prefix[i-1] + 1;
		}
		else{
			prefix[i] = prefix[i-1];
		}
	}
	
	for(int k = 1; k <= q; k++){
		int l,r; cin>>l>>r;
		if(l == 0){
			cout<<prefix[r]<<"\n";
		}
		else{
			cout<<prefix[r] - prefix[l-1]<<"\n";
		}
	}
}
