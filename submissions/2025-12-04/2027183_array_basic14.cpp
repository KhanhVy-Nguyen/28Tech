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
	ll g=a[0];
	for(int i=1; i<n; i++){
		g=__gcd(g,a[i]);
	}
	cout<<g;
	return 0;
}
