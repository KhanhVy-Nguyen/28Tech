#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[3000000];

int main(){
	int n,q;cin>>n>>q;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	ll f[n];
	for(int i=0;i<n; i++){
		if(i==0) f[0]=a[0];
		else{
			f[i]=f[i-1]+a[i];
		}
	}
	while(q--){
		int l,r; cin>>l>>r;
		l--; r--;
		if(l==0) cout<<f[r]<<endl;
		else{
			cout<<f[r]-f[l-1]<<endl;
		}
	}
	return 0;
	

}
