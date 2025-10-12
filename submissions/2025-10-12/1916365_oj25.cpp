# include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n;
	int a=0;
	cin>>n;
	for (long long i=1;i<=n;i++){
		if (i%3==0 or i%5==0){
			a++;
		
		}
	}
	cout<<a;
	return 0;
	}
