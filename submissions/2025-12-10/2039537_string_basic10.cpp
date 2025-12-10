#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int cnt[10005]={0};

int main(){
	string s; getline(cin,s);
	
	bool ok=true;
	for(int i=0; i<s.size(); i++){
		cnt[s[i]]++;
		if(cnt[s[i]] == 2){
			cout<<s[i];
			ok=false;
			return 0;
		}
		
	}
	
	if(ok) cout<<"NONE";
	return 0;
	
}
