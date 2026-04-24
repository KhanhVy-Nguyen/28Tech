// Problem: [Đệ Quy]. Bài 25. Binary search
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion25
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool canFindX(const vector<int> &v, int l, int r, int x){
	if(l > r) return false;
	if(v[l] == x) return true;
	return canFindX(v, l + 1, r, x);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	int x; cin>>x;
	
	if(canFindX(v, 0, n - 1, x)) cout<<1;
	else cout<<0;
}
