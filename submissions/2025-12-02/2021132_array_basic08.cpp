#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n ;i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++){
		int cnt=1;
		for(int j=0; j<i; j++){
			if(a[i]==a[j]){
				cnt++;
			}
		}
		if(cnt==1){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
