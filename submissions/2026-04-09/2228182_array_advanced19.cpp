// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 19. Dãy con dài nhất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced19
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
    vector<int> res;
    for(int i=0; i<n; i++){
    	int value; cin>>value; 
    	v.push_back(value);
    }
    sort(v.begin(), v.end(), greater<int>());
    
    for(int i=0; i<n; i++){
    	res.push_back(v[i]);
    	if(v[i] == v[i+1]) break;
    	
    	if(i == n-1) res.push_back(v[i]);
    }
    
    sort(res.begin(), res.end());
    cout<<res.size()<<"\n";
    for(int x : res){
    	cout<<x<<" ";
    }
}
