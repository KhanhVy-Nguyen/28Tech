#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int n,m,k; cin>>n>>m>>k;
	ll sum=1;
	ll multi=1;
	//ll mod=1e9+7;
	for(int i=1; i<=k; i++){
		sum*=10;
	}
	for (int i=1; i<=m;i++){
		multi*=n;
		multi%=sum;
	}
	cout<<multi;
	return 0;
	
}
