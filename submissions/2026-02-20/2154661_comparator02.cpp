// Problem: [Comparator Lower_bound Upper_bound]. Bài 2. Sắp xếp theo trị tuyệt đối
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/comparator02
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	int n,X; cin>>n>>X;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	sort(a.begin(), a.end(), [X](int x, int y){
		if(abs(x-X) != abs(y-X)) return abs(x-X) < abs(y-X);
		return x<y;
	});
	for(int x:a) cout<<x<<" ";
	cout<<endl;
	
	sort(a.begin(), a.end(), [](int x, int y){
 		if(x%2 != y%2){
 			return x%2==0;
 		}
 		if(x%2==0){
 			return x<y;
 		}
 		return x>y;
 		
	});
	for(int x:a) cout<<x<<" ";
}
