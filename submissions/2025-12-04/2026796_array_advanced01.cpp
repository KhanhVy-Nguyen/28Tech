#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

ll f[3000000];

bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

bool symmetrical_array(int a[], int n){
	for(int i=0; i<n/2; i++){
		if(a[i]!=a[n-i-1]) return false;
	}
	return true;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	int max=0;
	int loc=0;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max=a[i];
			loc=i;
		}
	}
	cout<<max<<" "<<loc<<endl;
	
	int min=0;
	for(int i=0; i<n; i++){
		if(min>=a[i]){
			min=a[i];
			loc=i;
		}
	}
	cout<<min<<" "<<loc<<endl;
	
	int cnt=0;
	for(int i=0; i<n; i++){
		if(Prime(a[i])){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	
	int max_multi=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if((a[i]*a[j])>max_multi){
				max_multi=a[i]*a[j];
			}
		}
	}
	cout<<max_multi<<endl;
	
	if(symmetrical_array(a,n)) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
	
	ll multi=1;
	for(int i=0; i<n; i++){
		a[i]%=mod;
		multi*=a[i];
		multi%=mod;
	}
	cout<<multi;
	
	return 0;

}
