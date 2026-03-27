// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 7. Sắp xếp chẵn lẻ
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced07
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	vector<int> even;
	vector<int> odd;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		if(value%2==0){
			even.push_back(value);
		}
		else odd.push_back(value);
	}
	
	sort(odd.begin(), odd.end(), greater<int>());
	sort(even.begin(), even.end());
	
	for(int x:odd) cout<<x<<" ";
	for(int x:even) cout<<x<<" ";
}
