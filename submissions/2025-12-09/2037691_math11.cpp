#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


int sPrime_factor(int n){
	if(n==1) return 1;
	if(n%2==0) return 2;
	for(int i=3; i<=sqrt(n); i+=2){
		if(n%i==0) return i;
	}
	return n;
}

int main(){
	int n; cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<sPrime_factor(i)<<endl;
	}
	
	return 0;
}
