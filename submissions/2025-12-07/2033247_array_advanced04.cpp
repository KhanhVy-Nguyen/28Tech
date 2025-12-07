#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;


int main(){
	int n; cin>>n;
	ll a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int hailam=0;
	int nammuoi=0;
	int mottram=0;
	for(int i=0; i<n; i++){
		if(a[i]==25) hailam++;
		else if(a[i]==50) nammuoi++;
		else if(a[i]==100) mottram++;
	}
	
	bool ok=true;
	for(int i=0; i<n; i++){
		if(a[0]==50 || a[0]==100) ok=false;
		
		else if(a[i]==50){
			if(hailam>=1){
				hailam--;
			}
			else{
				ok=false;
				break;
			}
		}
		
		else if(a[i]==100){
			if(hailam>=3){
			    hailam-=3;
			}
			else if(hailam>=1 && nammuoi>=1){
				nammuoi--;
				hailam--;
			}
			else{
				ok=false;
				break;
			}
		}
	}
	
	if(ok) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
