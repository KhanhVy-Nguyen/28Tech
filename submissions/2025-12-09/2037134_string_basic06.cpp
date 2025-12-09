#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	sort(s.begin(), s.end());
	while(s.size()>1 && s[0]=='0'){
		s.erase(0,1);
	}
	cout<<s;
	return 0;
}
