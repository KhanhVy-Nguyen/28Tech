#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


int main(){
	int t; cin>>t;
	ll total=1;
	while(t--){
		ll p,e; cin>>p>>e;
		total = (total%mod) * ((e+1)%mod);
		total%=mod;
	}
	
	cout<<total;
	return 0;
}
