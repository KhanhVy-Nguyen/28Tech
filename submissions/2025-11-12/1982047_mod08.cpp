#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll F[1000005];

int main(){
    F[1]=2;
    F[2]=8;
    //ll n; cin>>n;
    for(int i=3; i<=1000000;i++){
    	F[i]=((2*F[i-1])%mod + (8*F[i-2])%mod);
    	F[i]%=mod;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
