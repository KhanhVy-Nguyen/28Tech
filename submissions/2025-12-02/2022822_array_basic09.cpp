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
	int cnt[50000]={0};
	for(int i=0; i<n; i++){
		cnt[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(cnt[a[i]]!=0){
			cout<<a[i]<<" "<<cnt[a[i]]<<"\n";
			cnt[a[i]]=0;
		}
		
	}
	return 0;
}
