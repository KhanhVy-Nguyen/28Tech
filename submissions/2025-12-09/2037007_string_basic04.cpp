#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	bool ok = true;
	for(int i=1; i<s.size(); i++){
		if(abs(s[i] - s[i-1]) != 1) ok=false;
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}
