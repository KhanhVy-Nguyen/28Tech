// Problem: [Set & Map Cơ Bản]. Bài 3. Set Map & char
// Contest: DMOJ
// URL: https://oj.28tech.com.vn/problem/setmap_basic03
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const ll mod = 1e9+7;



int main(){
	set<char> cam;
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		char c; cin>>c;
		cam.insert(c);
	}
	cout<<cam.size()<<endl;
	auto Max=cam.rbegin();
	auto Min=cam.begin();
	auto Max2=next(cam.rbegin());
	auto Min2=next(cam.begin());
	cout<<*Max<<" "<<*Min<<" "<<*Max2<<" "<<*Min2;
}
