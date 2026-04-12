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
    vector<int> v;
    for(int i=0; i<n; i++){
    	int value; cin>>value;
    	v.push_back(value);
    }
    
    sort(v.begin(), v.end(), [](int a, int b){
    	if(a % 2 != 0 && b % 2 == 0) return true;
    	else if(a % 2 == 0 && b % 2 != 0) return false;
    	else if(a % 2 != 0 && b % 2 != 0) return a > b;
    	else{
    		return a < b;
    	}
    });
    
    for(int x : v) cout<<x<<" ";
}
