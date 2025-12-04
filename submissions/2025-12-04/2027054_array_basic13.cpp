#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[1000];


int main(){
	int n; cin>>n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	ll total=0;
	ll multi=1;
	for(int i=0; i<n; i++){
		total = total + (a[i]%mod);
		total%=mod;
	}
	
	for(int i=0; i<n; i++){
		multi = multi * (a[i]%mod);
		multi%=mod;
	}
	
	cout<<total<<"\n"<<multi;
	return 0;
}
