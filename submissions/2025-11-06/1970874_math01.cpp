#include<bits/stdc++.h>

using namespace std;
using ll =long long;

int main(){
	int n; cin>>n;
	bool ok=true;
	if(n==0 || n==1) ok=false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			ok=false;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}
