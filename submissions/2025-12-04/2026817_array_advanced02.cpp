#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	bool ok=true;
	for(int i=1; i<n; i++){
		if(a[i-1]>a[i]){
			return false;
		}
		
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
