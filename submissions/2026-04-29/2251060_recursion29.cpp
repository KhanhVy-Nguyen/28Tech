// Problem: [Đệ Quy]. Bài 29. Tháp Hà Nội
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion29
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

//key

void solve(int n, int one, int three, int two){
	if(n == 1){
		cout<<one<<" "<<three<<"\n";
		return;
	}
	
	// move n - 1 cuc tu 1 -> 2
	solve(n - 1, one, two, three);
	
	//move 1 cuc tu 1 -> 3
	cout<<one<<" "<<three<<"\n";
	
	//move n - 1 cuc tu 2 -> 3
	solve(n - 1, two, three, one);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	cout<<pow(2, n) - 1<<"\n";
	solve(n, 1, 3, 2);
}
