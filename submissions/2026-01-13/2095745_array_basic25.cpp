// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 25. Mảng chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; 
	int even=0, odd=0;
	while(cin >> n){
    	if(n%2==0) even++;
    	else odd++;
	}
	if(even>odd) cout<<"CHAN";
	if(even<odd) cout<<"LE";
	if(even==odd) cout<<"CHANLE";
}
