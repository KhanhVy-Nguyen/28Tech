// Problem: [Lý Thuyết Số – Toán Học]. Bài 30. Chữ số cuối cùng lớn nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/math30
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

bool onemax(int n){
	int last=n%10;
	n/=10;
	int ones=0;
	while(n!=0){
		ones=n%10;
		n/=10;
		if(ones>last) return false;
	}
	return true;
}

int main(){
	int n; cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(Prime(i) && onemax(i)) {
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<endl;
	cout<<cnt;
	return 0;
}
