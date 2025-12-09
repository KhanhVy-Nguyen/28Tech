#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s;
	getline(cin,s);
	
	int cnt=0;
	string res="";
	for(int i=s.size()-1; i>=0; i--){
		cnt++;
		res.insert(0,string(1,s[i]));
		if(cnt%3==0 && i!=0){
			res = ',' + res;
		}
	}
	cout<<res;
	return 0;
}
