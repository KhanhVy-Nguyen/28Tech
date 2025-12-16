// Problem: [Vector]. Bài 11. Hàm trả về vector
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/vector11
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

bool Prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

void nhap(vector<int> &v){
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		v.push_back(x);
	}
}


vector<int> prime_list(vector<int> v){
    vector<int> res;
    for(int i=0; i<v.size(); i++){
    	if(Prime(v[i])){
    		res.push_back(v[i]);
    	}
    }
    return res;
}

void in(vector<int> v){
	for(int i:v){
		cout<<i<<" ";
	}
}
int main(){
    vector<int> v;
    nhap(v); 
    vector<int> res = prime_list(v);
    in(res);
}
