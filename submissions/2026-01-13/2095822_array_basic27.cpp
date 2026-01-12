// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 27. Mảng đánh dấu 2
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic27
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int mark[1000001]={0};

int main(){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int a; cin>>a;
		mark[a]++;
	}
	
	for(int i=0; i<1000001;i++){
		if(mark[i]>0){
			cout<<i<<" "<<mark[i]<<endl;
			mark[i]=0;
		}
	}
}
