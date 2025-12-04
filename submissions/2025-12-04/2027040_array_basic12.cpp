#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[1000];


int main(){
	int n; cin>>n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int max=a[0];
	int min=a[0];
	int maxloc=0;
	int minloc=0;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max=a[i];
			maxloc=i;
		}
	}
	
	for(int i=0; i<n; i++){
		if(min>=a[i]){
			min=a[i];
			minloc=i;
		}
	}
	cout<<minloc<<" "<<maxloc;
	return 0;
	
	
}
