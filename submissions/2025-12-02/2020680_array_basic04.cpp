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
	int x; cin>>x;
	int bigger=0;
	int smaller=0;
	for(int i=0; i<n; i++){
		if(a[i]>x) bigger++;
		else if(a[i]<x) smaller++;
	}
	cout<<smaller<<"\n"<<bigger;
	return 0;
}
