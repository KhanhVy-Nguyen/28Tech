// Problem: [Đệ Quy]. Bài 28. Số lần xuất hiện
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion28
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int firstpos(const vector<int> &v, int l, int r, int x){
	if(v[l] == x) return l;
	return firstpos(v, l + 1, r, x);
}

int lastpos(const vector<int> &v, int l, int r, int x){
	if(v[r] == x) return r;
	return lastpos(v, l, r - 1, x);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	vector<int> v;
	for(int i =0 ; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	int x; cin>>x;
	
	int first = firstpos(v, 0, n - 1, x);
	int last = lastpos(v, 0, n - 1, x);
	cout<<last - first + 1;
}
