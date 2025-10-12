#include <bits/stdc++.h>

using namespace std;

int main (){
	int x,y;
	float n;
	cin>>x>>y;
	n=sqrt((pow(abs(x),2))+(pow(abs(y),2)));
	cout<<fixed<<setprecision(2)<<n;
	return 0;
}
