// Problem: [Đệ Quy]. Bài 22. In mảng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion22
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

void ltor(const vector<int> &v, int l, int r){
	if(l > r) return ;
	cout<< v[l]<<" ";
	return ltor(v, l + 1, r);
	
}

void rtol(const vector<int> &v, int l, int r){
	if(r < l) return;
	cout<<v[r]<<" ";
	return rtol(v, l, r - 1);
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
	
	ltor(v ,0 ,n - 1);
	cout<<"\n";
	rtol(v ,0 ,n - 1);
}
