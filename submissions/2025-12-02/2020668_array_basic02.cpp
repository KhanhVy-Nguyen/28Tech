#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

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
	int n; cin>>n;
	int a[n];
	double total=0;
	double cnt=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++){
		if(Prime(a[i])){
			total+=a[i];
			cnt++;
		}
	}
	cout<<fixed<<setprecision(3)<<total/cnt;
	return 0;
}
