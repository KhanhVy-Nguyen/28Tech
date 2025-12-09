#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	if(s.size() % 2 == 0) cout<<"NOT FOUND";
	else cout<<s[s.size()/2];
	return 0;
	
}
