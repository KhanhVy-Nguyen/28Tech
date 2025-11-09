#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll mod=(int)(1e9+7);

ll abc(int a, int b){
	ll sum=1;
	for (int i=1; i<=b; i++){
		sum*=a%mod;
		sum%=mod;
	}
	return sum;
}

int main(){
	int a, b; cin>>a>>b;
	cout<<abc(a,b);
	return 0;
}
