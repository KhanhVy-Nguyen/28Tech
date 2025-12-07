#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const ll mod= 1e9+7;


bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}


int main(){
	int t; cin>>t;
	for(int i=1; i<=t; i++){
		int n; cin>>n;
		if(Prime(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
