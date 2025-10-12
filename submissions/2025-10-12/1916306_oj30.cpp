# include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y,z,s;
	cin>>n;
	x=n%10;
	y=((n-x)/10)%10;
	z=((n%1000)/100);
	s=pow(10,x)+pow(5,y)+pow(3,z);
	cout<<s;
	return 0;
	}
