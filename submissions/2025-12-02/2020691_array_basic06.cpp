#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


int main(){
	int n; cin>>n;
	int a[n];
	int cnt=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int k; cin>>k;
	
	for(int i=0; i<n ;i++){
		for(int j=0; j<i; j++){
			if(i!=j && (a[i]+a[j]==k)){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
	
	
}
