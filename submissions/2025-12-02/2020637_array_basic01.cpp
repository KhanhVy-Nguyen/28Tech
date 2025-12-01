#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	int n; cin>>n;
	int a[n];
	int totale=0;
	int totalo=0;
	int cnt_even=0;
	int cnt_odd=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			cnt_even++;
			totale+=a[i];
		}
		else{
			cnt_odd++;
			totalo+=a[i];
		}
	}
	cout<<cnt_even<<"\n"<<cnt_odd<<"\n"<<totale<<"\n"<<totalo;
	return 0;
}
