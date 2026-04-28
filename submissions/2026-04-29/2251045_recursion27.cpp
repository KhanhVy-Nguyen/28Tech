// Problem: [Đệ Quy]. Bài 27. Upper bound
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion27
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int UpperBoundRecursion(const vector<int> &v, int l, int r, int x, int res){
	if(l > r) return res;
	int mid = l + (r - l) / 2;
	if(v[mid] > x){
		return UpperBoundRecursion(v, mid + 1, r, x, mid);
	}
	else{
		return UpperBoundRecursion(v, l, mid - 1, x, res);
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		v.push_back(value);
	}
	
	int x; cin>>x;
	
	cout<<UpperBoundRecursion(v, 0, n - 1, x, n);
}
