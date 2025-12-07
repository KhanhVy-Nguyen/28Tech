#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


bool Prime(ll n){
	if(n<2) return false;
	else{
		for(ll i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int main(){
	ll n; cin>>n;
	ll cnt=0;
	for(ll i=2; i<=sqrt(n); i++){
		if(Prime(i)) cnt++;
	}
	cout<<cnt;
	return 0;
}
