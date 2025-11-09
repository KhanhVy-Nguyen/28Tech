#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll mod=(int)(1e9+7);

long long fn (int n){
	if(n==1||n==2) return 1;
	ll f1=1, f2=1;
	ll fi;
	for(int i=3; i<=n; i++){
		fi=(3*f1)%mod+(2*f2)%mod;
		fi%=mod;
		f1=f2;
		f2=fi;
	}
	return fi;
}

int main(){
	int n; cin>>n;
	cout<<fn(n);
	return 0;
}
