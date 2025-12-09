#include <bits/stdc++.h>

using namespace std;
using ll=long long; 
const int mod=1e9+7;

int main(){
	ll n,p; cin>>n>>p;
	
	int x=0;
	for(int i=p; i<=n; i*=p){
		x+=n/i;
	}
	cout<<x;
	return 0;
}
