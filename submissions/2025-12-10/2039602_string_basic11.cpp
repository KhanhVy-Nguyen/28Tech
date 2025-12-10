#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

int main(){
	string s; getline(cin,s);
	
	int cnt_d=0;
	int cnt_m=0;
	for(int i=0; i<s.size(); i++){
		if(s.find('/') != 2){
			s.insert(0,"0");
		}
		if(s.find('/',(s.find('/')+1)) != 5){
			s.insert(3,"0");
		}
	}
	cout<<s;
	return 0;
}
