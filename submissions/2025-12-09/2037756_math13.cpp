#include <bits/stdc++.h>

using namespace std;
using ll=long long; 
const int mod=1e9+7;

int main(){
	ll n,p; cin>>n>>p;
	
	int cnt=0;
	ll j=0;
	for(ll i=p; i<=n; i++){
		j=i;
		while(j%p==0){
			cnt++;
			j/=p;
		}
	}
	cout<<cnt;
	return 0;
}
