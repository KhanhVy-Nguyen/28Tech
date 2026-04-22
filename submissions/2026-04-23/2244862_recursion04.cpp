// Problem: [Đệ Quy]. Bài 4. Tính tổng 4
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion04
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll S(int n){
	if(n <= 0) return 0;
	if(n % 2 == 0) return n + S(n - 1);
	else return S(n - 1) - n;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cout<<S(n);
}
