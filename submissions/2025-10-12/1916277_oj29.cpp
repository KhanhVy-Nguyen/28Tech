# include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y,z;
	cin>>n;
	x=n%10;
	y=((n-x)/10)%10;
	z=((n%1000)/100);
	cout<<max({x,y,z});
	return 0;
	}
