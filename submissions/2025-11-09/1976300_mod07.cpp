#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll mod=(int)(1e9+7);

ll ab(ll a, ll b){
	ll final=1;
	while(b!=0){
		if(b%2==1){
			final=final%mod * a%mod;
			final%=mod;
		}
		b/=2;
		a*=a%mod;
	}
	return final;
}


int main(){
	ll a,b; cin>>a>>b;
	
	cout<<ab(a,b);
	return 0;
}
