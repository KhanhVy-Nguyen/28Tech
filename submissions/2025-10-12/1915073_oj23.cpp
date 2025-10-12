#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n;
	cin>>n;
	int x = n/500000;
	cout<<x<<"\n";
	cout<<n-500000*x;
	return 0;
}
