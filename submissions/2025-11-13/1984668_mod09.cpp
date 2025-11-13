#include <bits/stdc++.h>

using namespace std;
using ll=long long;

//ll f[1000005];
const int mod= (1e9+7);

int main(){
	int n; cin>>n;
	ll res=1;
	for(int i=1; i<=n; i++){
			res*=28;
			res%=100;
	}
	cout<<res;
	return 0;
}
