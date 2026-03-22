// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 34. Căn hộ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk34
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,m,k; cin>>n>>m>>k;
	vector<int> wish(n), apartments(m);
	for(int &value : wish) cin>>value;
	for(int &value : apartments) cin>>value;
	
	sort(wish.begin(), wish.end());
	sort(apartments.begin(), apartments.end());
	
	int i=0, j=0, cnt=0;
	
	while(i<n && j<m){
		if(abs(wish[i] - apartments[j]) <= k){
			cnt++;
			i++;
			j++;
		}
		else if(wish[i] - apartments[j] > k){
			j++;
		}
		else{
			i++;
		}
	}
	cout<<cnt;
}
