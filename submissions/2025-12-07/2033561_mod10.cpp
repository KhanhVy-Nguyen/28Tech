#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const ll mod= 1e9+7;

ll pow_mod(ll a, ll b) {
    ll result = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

int main(){
	int n; cin>>n;
	ll total=0;
	for(int i=1; i<=n; i++){
		total=(total + pow_mod(i,i)) % mod;
	}
	cout<<total;
	return 0;
}
