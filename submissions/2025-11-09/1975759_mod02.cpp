#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int n; cin>>n;
	ll sum=1;
	ll mod=1e9+7;
	for(int i=1; i<=n;i++){
		ll m; cin>>m;
		sum*=m%mod;
		sum%=mod;
	}
	cout<<sum;
	return 0;
}
