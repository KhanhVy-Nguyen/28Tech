#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[1000];


int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int cnt =0;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(i!=j && a[i]+a[j]==28){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
