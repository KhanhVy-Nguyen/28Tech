// Problem: [Đệ Quy]. Bài 21. Kiểm tra mảng đối xứng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/recursion21
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;


bool isSymmetricalArray(const vector<int> &v, int l, int r){
	if(l >= r) return true;
	if(v[l] != v[r]) return false;
	return isSymmetricalArray(v, l + 1, r - 1);
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
	
	if(isSymmetricalArray(v, 0, n - 1)) cout<<"YES";
	else cout<<"NO";
}
