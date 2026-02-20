// Problem: [Sắp Xếp – Tìm Kiếm]. Bài 3. Sắp xếp theo tổng chữ số
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/sxtk03
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;

int getTotalDigits(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a.begin(), a.end(), [](int x, int y){
		if(getTotalDigits(x) != getTotalDigits(y)){
			return getTotalDigits(x) < getTotalDigits(y);
		}
		return x<y;
	});
	for(int x:a) cout<<x<<" ";
}
