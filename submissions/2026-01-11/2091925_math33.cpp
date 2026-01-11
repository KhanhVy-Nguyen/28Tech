// Problem: [Lý Thuyết Số – Toán Học]. Bài 33. Liệt kê chữ số nguyên tố
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math33
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

void mintomax(ll n){
	int c2=0, c3=0, c5=0, c7=0;
	while(n>0){
		int ones=n%10;
		if(ones==2) c2++;
		if(ones==3) c3++;
		if(ones==5) c5++;
		if(ones==7) c7++;
		n/=10;
	}
	if(c2!=0) cout<<2<<" "<<c2<<"\n";
	if(c3!=0) cout<<3<<" "<<c3<<"\n";
	if(c5!=0) cout<<5<<" "<<c5<<"\n";
	if(c7!=0) cout<<7<<" "<<c7<<"\n";
}

ll reverse (ll n){
	ll res=0;
	while(n>0){
		res=res*10 + n%10;
		n/=10;
	}
	return res;
}

void FollowOrder(ll n){
	ll a=reverse(n);
	ll aforcnt=a;
	int c2=0, c3=0, c5=0, c7=0;
	while(aforcnt>0){
		int ones=aforcnt%10;
		if(ones==2) c2++;
		if(ones==3) c3++;
		if(ones==5) c5++;
		if(ones==7) c7++;
		aforcnt/=10;
	}
	
	while(a>0){
		int one=a%10;
		if(one==2 && c2!=0){
			cout<<2<<" "<<c2<<"\n";
			c2=0;
		}
		if(one==3 && c3!=0){
			cout<<3<<" "<<c3<<"\n";
			c3=0;
		}
		if(one==5 && c5!=0){
			cout<<5<<" "<<c5<<"\n";
			c5=0;
		}
		if(one==7 && c7!=0){
			cout<<7<<" "<<c7<<"\n";
			c7=0;
		}
		a/=10;
	}
}
int main(){
	ll n; cin>>n;
	mintomax(n);
	cout<<endl;
	FollowOrder(n);
}
