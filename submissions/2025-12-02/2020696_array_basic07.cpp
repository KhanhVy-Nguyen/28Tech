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
	int min=abs(a[0]-a[1]);
	for(int i=0; i<n ;i++){
		for(int j=0; j<i; j++){
			if(abs(a[i]-a[j])<min){
				min=abs(a[i]-a[j]);
			}
		}
	}
	cout<<min;
	return 0;
	
	
}
