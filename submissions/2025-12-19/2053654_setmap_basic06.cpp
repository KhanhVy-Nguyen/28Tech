// Problem: [Set & Map Cơ Bản]. Bài 6. Set Map & String 1
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic06
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
	set<string> sam;
	for(int i=1;i<=n; i++){
		string a; cin>>a;
		sam.insert(a);
	}
	cout<<sam.size()<<endl;
	for(string c:sam) cout<<c<<" ";
	
}
