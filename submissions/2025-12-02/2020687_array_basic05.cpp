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
	for(int i=0; i<n; i++){
		if(i%2==0 && a[i]%2==0){
			cout<<a[i]<<" ";
			cnt++;
		}
	}
	if(cnt==0) cout<<"NONE";
	return 0;
	
}
