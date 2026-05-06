// Problem: [Mảng 2 Chiều]. Bài 24. Phần tử xuất hiện ở mọi hàng
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/2darray24
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int a[105][105];
int mark[100005];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	
	int max_value = INT_MIN;
	int min_value = INT_MAX;
	for(int i=0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin>>a[i][j];
			mark[a[i][j]]++;
			
			if(max_value < a[i][j]){
				max_value = a[i][j];
			}
			if(min_value > a[i][j]){
				min_value = a[i][j];
			}
		}
		
	}
	
	bool ok = false;
	for(int i = min_value; i <= max_value; i++){
		if(mark[i] >= n){
			cout<<i<<" ";
			ok = true;
			mark[i] = 0;
		}
	}
	if(!ok) cout<<"NOT FOUND";
	
}
