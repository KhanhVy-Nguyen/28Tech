// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 16. Liệt kê
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic16
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool isPrime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

bool isPalindrome(int n){
	int a=n;
	int re=0;
	while(a>0){
		re=re *10 + a%10;
		a/=10; 
	}
	return re==n;
}

bool isPerfectSquare(int n){
	int a=sqrt(n);
	return a*a==n;
}

bool isTotalPrime(int n){
	int total=0;
	while(n>0){
		total+=n%10;
		n/=10;
	}
	return isPrime(total);
}

int main(){
	int n; cin>>n;
	int a[n];
	int Prime=0, Palindrome=0, Square=0, TotalPrime=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(isPrime(a[i])) Prime++;
		if(isPalindrome(a[i])) Palindrome++;
		if(isPerfectSquare(a[i])) Square++;
		if(isTotalPrime(a[i])) TotalPrime++;
	}
	
	cout<<Prime<<endl;
	cout<<Palindrome<<endl;
	cout<<Square<<endl;
	cout<<TotalPrime<<endl;
}
