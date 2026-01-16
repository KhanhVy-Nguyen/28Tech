// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 44. Dãy con chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic44
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	int even=0, odd=0, res=0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(a[j]%2==0) even++;
			else odd++;
			if(even==odd) res++;
		}
		even=0;
		odd=0;
	}
	cout<<res;
	
}
