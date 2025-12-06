#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[1000];


int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int cnt[28]={0};
	int remain=0;
	for(int x:a){
		remain=x%28;
		cnt[remain]++;
	}
	
	ll res=(1ll*cnt[0]*(cnt[0]-1))/2 + (1ll*cnt[14]*(cnt[14]-1))/2;
	for(int i=1; i<=13; i++){
		res+=1ll*cnt[i]*cnt[28-i];
	}
	cout<<res;
	return 0;
}
