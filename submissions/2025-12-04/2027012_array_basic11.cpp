#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[1000];

bool Fibonacci(ll n){
	f[0]=0;
	f[1]=1;
	for(int i=2; i<=92; i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0; i<=92; i++){
		if(f[i]==n){
			return true;
		}
	}
	return false;
}

int main(){
	int n; cin>>n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		if(Fibonacci(a[i])){
			cout<<a[i]<<" ";
			cnt++;
		}
	}
	if(cnt==0) cout<<"NONE";
	return 0;
	
}
