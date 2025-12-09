#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ll n; cin>>n;
	
	bool ok=true;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			
			if(!ok) cout<<" * ";
			cout<<i<<'^'<<cnt;
			ok=false;
		}
		
	}
	if(n!=1){
		if(!ok) cout<<" * ";
		cout<<n<<"^1";
	}
	
	return 0;
}
