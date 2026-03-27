// Problem: [Mảng 1 Chiều Nâng Cao]. Bài 9. Đếm tần suất
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/array_advanced09
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
	set<int> s;
	unordered_set<int> uns;
	map<int,int> mp;
	vector<int> v;
	for(int i=0; i<n; i++){
		int value; cin>>value;
		s.insert(value);
		mp[value]++;
		v.push_back(value);
		
	}
	
	for(int x:s){
		cout<<x<<" "<<mp[x]<<"\n";
	}
	cout<<"\n";
	
	for(int x:v){
		if(uns.find(x) == uns.end()){
			cout<<x<<" "<<mp[x]<<"\n";
			uns.insert(x);
		}
	}
	
	return 0;
}
