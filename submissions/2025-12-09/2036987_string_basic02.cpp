#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	for(int i=s.size()-1; i>=0; i--){
		cout<<s[i];
	}
	cout<<endl;
	
	for(char x:s){
		cout<<char (tolower(x));
	}
	cout<<endl;
	
	for(char x:s){
		cout<<char (toupper(x));
	}
	cout<<endl;
	return 0;
}
