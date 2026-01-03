#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int legendre(int n, int p){
	int res=0;
	for(int i=p; i<=n; i*=p){
		res+=n/i;
	}
	return res;
}

bool isPrime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	int n; cin>>n;
	
	int total_power=1;
	vector<int> primefactor;
	
	for(int i=1; i<=n; i++){
		if(isPrime(i)){
			primefactor.push_back(i);
		}
	}
	
	for(int a:primefactor){
		total_power = ((total_power % mod) * (legendre(n,a) + 1)) % mod;
	}
	
	cout<<total_power;
	
	
}
