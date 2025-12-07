#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int main(){
	ll n; cin>>n;
	for(int i=2; i<=sqrt(n); i++){
		if(Prime(i)) cout<<i*i<<" ";
	}
	return 0;
}
