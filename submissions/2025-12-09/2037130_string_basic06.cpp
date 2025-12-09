#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	sort(s.begin(), s.end());
	string res="";
	for(char c:s){
		if(c!='0') res+=c;
	}
	cout<<res;
	return 0;
}
