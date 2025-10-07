#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y,z,t;
	cin>>x>>y>>z>>t;
	cout<<max(x,y)<<"\n";
	cout<<min(z,t)<<"\n";
	cout<<max({x,y,z})<<"\n";
	cout<<min({x,y,z,t})<<"\n";
	return 0;
}
