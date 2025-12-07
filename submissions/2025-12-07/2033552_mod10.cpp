#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod= 1e9+7;

int main(){
	int n; cin>>n;
	ll total=0;
	for(int i=1; i<=n; i++){
		total+=1ll* pow(i%mod,i);
		total%=mod;
	}
	cout<<total;
	return 0;
}
