#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


int main(){
	int n; cin>>n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int max=0;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max=a[i];
			cout<<max<<" ";
		}
	}
	return 0;
}
