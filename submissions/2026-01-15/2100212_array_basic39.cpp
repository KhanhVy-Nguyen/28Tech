// Problem: [Mảng 1 Chiều Cơ Bản]. Bài 39. Dãy số 0 & 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_basic39
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n; cin>>n;
	int a[n];
	vector<int> zero;
	vector<int> one;
	int cnt1=0, cnt0=0;
	for(int i=0; i<n; i++) cin>>a[i];
	
	for(int i=0; i<n; i++){
		if(a[i]==0){
			cnt0++;
			if(cnt1!=0){
				one.push_back(cnt1);
				cnt1=0;
			}
		}
		else {
			cnt1++;
			if(cnt0!=0){
				zero.push_back(cnt0);
				cnt0=0;
			}
		}
	}
	if(cnt0!=0) zero.push_back(cnt0);
	if(cnt1!=0) one.push_back(cnt1);
	
	for(int a:one) cout<<a<<" ";
	cout<<endl;
	for(int a:zero) cout<<a<<" ";
	
}
