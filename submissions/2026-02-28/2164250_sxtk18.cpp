// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 18. Cặp số có tổng nhỏ hơn K
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk18
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getLast(int a[], int l, int r, int x){
    int index = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] < x){
            index = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return index;
}

int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	
	int cnt=0;
	for(int i=0; i<n; i++){
		int last = getLast(a,i+1,n-1,k-a[i]);
		cnt = cnt + last-i+1;
	}
	cout<<cnt;
}
