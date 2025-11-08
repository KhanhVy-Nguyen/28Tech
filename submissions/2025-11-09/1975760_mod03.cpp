#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int n; cin>>n;
	//ll sum=0;
	ll multi=1;
	ll mod=1e9+7;
	for (int i=1; i<=n;i++){
		multi*=i;
		multi%=mod;
		cout<<multi<<"\n";
	}
	return 0;
	
}
