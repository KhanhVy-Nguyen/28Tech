#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	string num="";
	string al="";
	for(char x:s){
		if(isdigit(x)) num+=x;
		else if(isalpha(x)) al+=x;
	}
	cout<<num<<"\n"<<al;
	return 0;
}
