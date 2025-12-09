#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	int cnt=0;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])) cnt+=s[i]-'0';
	}
	cout<<cnt;
	return 0;
}
