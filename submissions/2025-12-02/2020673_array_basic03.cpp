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
	
	int min=a[0];
	for(int i=0; i<n; i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(int i=0; i<n ;i++){
		if(min==a[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}
