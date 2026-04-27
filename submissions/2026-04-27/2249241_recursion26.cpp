// Problem: [Đệ Quy]. Bài 26. Lower bound
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion26
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int LowerBoundRecursion(const vector<int> &v, int l, int r, int x, int res){
	
	int mid = (l + r) / 2;
	if(l > r) return res;
	if(v[mid] >= x){
		return LowerBoundRecursion(v, l, mid - 1, x, mid);
	}
	else if(v[mid] < x){
		return LowerBoundRecursion(v, l + 1, r, x, res);
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
	
	int res = LowerBoundRecursion(v, 0, n - 1, x, -1);
	if(res == -1){
		cout<<0;
	}
	else{
		cout<<res;
	}
	
}
