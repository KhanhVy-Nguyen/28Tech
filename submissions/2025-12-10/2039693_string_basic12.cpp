#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	int cnt=0;
	while(cin>>s){
		bool ok=true;
		for(char c:s){
			if(!isupper(c)){
				ok=false;
			}
		}
		if(ok) cnt++;
	}
	cout<<cnt;
	return 0;
}
