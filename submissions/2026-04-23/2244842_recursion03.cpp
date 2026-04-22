// Problem: [Đệ Quy]. Bài 3. Tính tổng 3
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion03
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

ll S(int n){
	if(n == 0) return 0;
	return (ll)n * n * n + S(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cout<<S(n);
}
